#ifndef __SANGUOSHA2_H
#define __SANGUOSHA2_H
#include <vector>
#include <map>
#include <stack>
#include <memory>
#include "hero.h"
class Room;
class Hero;
class GameProcess
{
public:
	void SetOwer(Hero* hero);
	Hero* GetOwer();
	virtual void start() {}
private:
	Hero* _ower;
};

class Room
{
public:
	virtual void Update();
	std::shared_ptr<Hero> GetHero(int hero_id);
	std::vector<std::shared_ptr<Hero> > GetHeros();
private:
	std::vector<std::shared_ptr<Hero> > _hero_seq;
	std::map<int, std::shared_ptr<Hero> > _hero_map;
	std::stack<std::shared_ptr<GameProcess> > _game_process;
};


class RoomHelper
{
public:
	static int GetDis(Room* room, int hero_id1, int hero_id2)
	{
		if (nullptr == room)
			return INT_MAX;
		int dis = INT_MAX;
		auto heros = room->GetHeros();
		if (heros.empty())
			return INT_MAX;
		int index = -1;
		for (int i = 0; i < heros.size(); ++i)
		{
			//if (heros[i]->gether)
		}
	}
};

#endif
#include "room.h"
#include "hero.h"
#include <memory>



void GameProcess::SetOwer(Hero* hero)
{
	_ower = hero;
}

Hero* GameProcess::GetOwer()
{
	return _ower;
}

void Room::Update()
{

}


std::shared_ptr<Hero> Room::GetHero(int hero_id)
{
	auto it = _hero_map.find(hero_id);
	if (it != _hero_map.end())
		return it->second;
	return nullptr;


}

std::vector<std::shared_ptr<Hero> > Room::GetHeros()
{
	return _hero_seq;
}
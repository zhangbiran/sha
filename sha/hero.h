#ifndef __SANGUOSHA_HERO_
#define __SANGUOSHA_HERO_

#include <map>
#include <set>
#include <memory>
#include "skill.h"
#include "card.h"
#include "equip.h"
#include <vector>


enum HeroDeadState
{
	HeroDeadStateDie = 0,
	HeroDeadStateAlive = 1,
};

struct HeroAttr
{
	HeroAttr() : _dead_state(HeroDeadStateAlive)
	{}

	int GetHeroId() { return _hero_id; }
	int GetBlood() { return _blood; }
	int GetAttackDis() { return _attack_dis; }
	int GetDefenseDis() { return _deffense_dis; }
	HeroDeadState GetDeadState() { return _dead_state; }
	void SetDeadState(HeroDeadState state) { _dead_state = state; }
	
	int _hero_id;
	int _blood;
	int _attack_dis;
	int _deffense_dis;
	HeroDeadState _dead_state;
};

class Room;
class DefenseWeapon;
class Hero
{
public:
	Hero();

	//equip
public:
	void AddDefenseWeapon(std::shared_ptr<DefenseWeapon> dw);
	std::shared_ptr<DefenseWeapon> GetDefenseWeapon();

	//skill
public:
	void AddSkill(std::shared_ptr<Skill> skill);
	std::map<int, std::shared_ptr<Skill> > GetSkills();

	//card
public:
	void AddCard(std::shared_ptr<Card> c);
	std::shared_ptr<Card> GetCard(int card_id);
	const std::map<int, std::shared_ptr<Card> >& GetCards();
	//room
public:
	Room* GetRoom();

	//attr
public:
	int GetHeroId();
	int GetBlood();
	int GetAttackDis();
	int GetDefenseDis();
	bool IsDead();
	void Dead();
	void Rebirth();


public:

private:
	HeroAttr _attr;
	Room* _room;
	std::map<int, std::shared_ptr<Card> > _card_map;
	std::map<int, std::shared_ptr<Skill> > _skill_map;
	std::shared_ptr<DefenseWeapon> _defense_weapon;
};


class HeroHelper
{
public:
	static bool HasElude(std::shared_ptr<Hero> hero);
	static bool HasRuYiYu(std::shared_ptr<Hero> hero);
};


#endif
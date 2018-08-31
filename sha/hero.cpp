#include "hero.h"
#include "equip.h"
#include "card.h"
#include <memory>
Hero::Hero()
{
}

void Hero::AddDefenseWeapon(std::shared_ptr<DefenseWeapon> dw)
{
	if (_defense_weapon)
		_defense_weapon->BeUnHave(this);
	_defense_weapon = dw;
	if (_defense_weapon)
		_defense_weapon->BeHave(this);
}

std::shared_ptr<DefenseWeapon> Hero::GetDefenseWeapon()
{
	return _defense_weapon;
}

void Hero::AddCard(std::shared_ptr<Card> c)
{
	_card_map[c->GetCardId()] = c;
}

std::shared_ptr<Card> Hero::GetCard(int card_id)
{
	auto it = _card_map.find(card_id);
	if (it != _card_map.end())
		return it->second;
	return nullptr;
}

const std::map<int, std::shared_ptr<Card> >& Hero::GetCards()
{
	return _card_map;
}

Room* Hero::GetRoom()
{
	return _room;
}

int Hero::GetHeroId()
{
	return _attr.GetHeroId();
}

int Hero::GetBlood()
{
	return _attr.GetBlood();
}

int Hero::GetAttackDis()
{
	return _attr.GetAttackDis();
}

int Hero::GetDefenseDis()
{
	return _attr.GetDefenseDis();
}

bool Hero::IsDead()
{
	return HeroDeadStateDie == _attr.GetDeadState();
}

void Hero::Dead()
{
	_attr.SetDeadState(HeroDeadStateDie);
}

void Hero::Rebirth()
{
	_attr.SetDeadState(HeroDeadStateAlive);
}

bool HeroHelper::HasElude(std::shared_ptr<Hero> hero)
{
	return false;
}

bool HeroHelper::HasRuYiYu(std::shared_ptr<Hero> hero)
{
	return false;
}
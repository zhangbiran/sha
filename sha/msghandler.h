#ifndef __SANGUOSHA_MSG_HANDLER_H
#define __SANGUOSHA_MSG_HANDLER_H

#include "card.h"
#include "hero.h"
#include "room.h"
class MsgHandler
{
public:
	void Kill(int card_id, int hero_id) 
	{
		if (nullptr == _hero->GetRoom())
			return;
		auto card = _hero->GetCard(card_id);
		if (!card)
			return;
		if (card->GetEffect() != EffectKill)
			return;
		auto other_hero = _hero->GetRoom()->GetHero(hero_id);
		if (!other_hero)
			return;
		if (_hero->GetRoom() != other_hero->GetRoom())
			return;
		int dis = RoomHelper::GetDis(_hero->GetRoom(), _hero->GetHeroId(), other_hero->GetHeroId());
		if (_hero->GetAttackDis() < dis + other_hero->GetDefenseDis())
			return;

		if (_hero->GetDefenseWeapon())
		{
			if (_hero->GetDefenseWeapon()->IsEscapeKill(card))
				return;
			if (_hero->GetDefenseWeapon()->IsAsEscape())
			{

			}
		}

	}


private:
	Hero * _hero;
};
#endif
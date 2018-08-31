#include "equip.h"
#include "card.h"

void DefenseWeapon::SetType(DefenseWeaponType type)
{
	_type = type;
}

DefenseWeaponType DefenseWeapon::GetType()
{
	return _type;
}

bool RenWangDun::IsEscapeKill(std::shared_ptr<Card> card)
{
	if ((ColorMeiHua == card->GetColor() || ColorHeiTao == card->GetColor()) &&
		card->GetEffect() == EffectKill)
	{
		return true;
	}

	return false;
}
#include "card.h"

int Card::GetCardId()
{
	return _attr.GetCardId();
}

int Card::GetNum()
{
	return _attr.GetNum();
}

Color Card::GetColor()
{
	return _attr.GetColor();
}

Effect Card::GetEffect()
{
	return _attr.GetEffect();
}
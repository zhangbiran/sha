#ifndef __SANGUOSHA_CARD_H
#define __SANGUOSHA_CARD_H

enum Color
{
	ColorFangKai = 1,
	ColorMeiHua = 2,
	ColorHongTao = 3,
	ColorHeiTao = 4
};

enum Effect
{
	EffectKill = 1,				//杀
	EffectElude = 2,			//闪
	EffectPeach = 3,			//桃子
	EffectHappyInEnemySide = 4,	//乐不思蜀
	EffectLighting = 5,			//闪电
	EffectNnassailable = 6,		//无懈可击
	EffectBorrowKnifeKillMan = 7,//借刀杀人
	EffectArrows = 8,			//万箭齐发
	EffectOutOfThinAir = 9,		//无中生有
	EffectFiveHarvests = 10,    //五谷丰登
	EffectNaInvasion = 11,		//南蛮入侵
};

struct CardAttr
{
	int GetCardId() { return _card_id; }
	int GetNum() { return _num; }
	Color GetColor() { return _color; }
	Effect GetEffect() { return _effect; }
	int _card_id;
	int _num;
	Color _color;
	Effect _effect;
};

class Card
{
public:
	int GetCardId();
	int GetNum();
	Color GetColor();
	Effect GetEffect();
	CardAttr _attr;
};

#endif
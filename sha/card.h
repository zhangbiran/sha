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
	EffectKill = 1,				//ɱ
	EffectElude = 2,			//��
	EffectPeach = 3,			//����
	EffectHappyInEnemySide = 4,	//�ֲ�˼��
	EffectLighting = 5,			//����
	EffectNnassailable = 6,		//��и�ɻ�
	EffectBorrowKnifeKillMan = 7,//�赶ɱ��
	EffectArrows = 8,			//����뷢
	EffectOutOfThinAir = 9,		//��������
	EffectFiveHarvests = 10,    //��ȷ��
	EffectNaInvasion = 11,		//��������
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
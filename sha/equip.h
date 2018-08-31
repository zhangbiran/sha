#ifndef _SANGUOSHA_EQUIP
#define _SANGUOSHA_EQUIP

#include <memory>

class Card;
class Hero;

enum EquipType
{
	EquipTypeUnknown = 0,
	EquipTypeWeapon = 1,
	EquipTypeDefense = 2,
	EquipTypeDefenseHorse = 3,
	EquipTypeOffensiveHorse = 4
};

enum WeaponType
{
	WeaponType_ZhuGeLianNu = 0,	//÷Ó∏¡¨ÂÛ
	WeaponType_QingGangJian = 1,//«‡∏÷Ω£
	WeaponType_ZhangBaSheMao = 2,//’…∞À…ﬂ√¨
	WeaponType_ChiXiongShuangGuJian,//¥∆–€À´π…Ω£
};




struct WeaponAttr
{
	int dis;
};


class Weapon
{
public:

	WeaponType GetType() { return _type; }

protected:
	WeaponType _type;
};
//////////////////////////////////////////
enum DefenseWeaponType
{
	DefenseWeaponTypeRenWangDun = 0,//» Õı∂‹:∫⁄…´…±≤ªø……±
	DefenseWeaponTypeRuYiYu = 1,	//»Á“‚”Ò
};

class DefenseWeapon
{
public:
	virtual ~DefenseWeapon(){}
	virtual void BeHave(Hero* hero) {}
	virtual void BeUnHave(Hero* hero) {}
	void SetType(DefenseWeaponType type);
	DefenseWeaponType GetType();
	virtual bool IsEscapeKill(std::shared_ptr<Card> card) { return false; }
	virtual bool IsAsEscape() { return false; }
	virtual bool IsNeedJudge() { return false; }
	virtual bool IsJudgeSuccess() { return false; }
private:
	DefenseWeaponType _type;
};

class RenWangDun : public DefenseWeapon
{
public:
	virtual bool IsEscapeKill(std::shared_ptr<Card> card);
};


class ZhuGeLianNu : public Weapon
{
public:
	ZhuGeLianNu()
	{
		_type = WeaponType_ZhuGeLianNu;
	}

};


#endif
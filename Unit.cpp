#include "Unit.hpp"

Unit::Unit()
{
	type_ = 0;

	maximumHp_  = 0;
	currentHp_  = 0;
	recoveryHp_ = 0;

	damage_ = 0;
}

Unit::Unit(Object object, int type, int maximumHp, int currentHp, int recoveryHp, int damage): Object(object)
{
	type_ = type;

	maximumHp_  = maximumHp;
	currentHp_  = currentHp;
	recoveryHp_ = recoveryHp;

	damage_ = damage;
}

Unit::~Unit()
{
	type_ = 0;

	maximumHp_  = 0;
	currentHp_  = 0;
	recoveryHp_ = 0;

	damage_ = 0;
}


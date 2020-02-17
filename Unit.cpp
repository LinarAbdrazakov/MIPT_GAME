#include "Unit.hpp"

Unit::Unit()
{
	maximumHp_  = 0;
	currentHp_  = 0;
	recoveryHp_ = 0;

	damage_ = 0;
}

Unit::Unit(Object object, int maximumHp, int currentHp, int recoveryHp, int damage): Object(object)
{
	maximumHp_  = maximumHp;
	currentHp_  = currentHp;
	recoveryHp_ = recoveryHp;

	damage_ = damage;
}

Unit::~Unit()
{
	maximumHp_  = 0;
	currentHp_  = 0;
	recoveryHp_ = 0;

	damage_ = 0;
}

const int Unit::GetMaximumHp() const
{
	return maximumHp_;
}

const int Unit::GetCurrentHp() const
{
	return currentHp_;
}

const int Unit::GetRecoveryHp() const
{
	return recoveryHp_;
}

const int Unit::GetDamage() const
{
	return damage_;
}

void Unit::SetMaximumHp(int maximumHp)
{
	maximumHp_ = maximumHp;
}

void Unit::SetCurrentHp(int currentHp)
{
    currentHp_ = currentHp;
}

void Unit::SetRecoveryHp(int recoveryHp)
{
    recoveryHp_ = recoveryHp;
}

void Unit::SetDamage(int damage)
{
    damage_ = damage;
}


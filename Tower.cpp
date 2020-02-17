#include "Tower.hpp"

Tower::Tower()
{
	maximumHp_ = 0;
	currentHp_ = 0;
}

Tower::Tower(Object object, int maximumHp, int currentHp): Object(object)
{
	maximumHp_ = maximumHp;
	currentHp_ = currentHp;
}

Tower::~Tower()
{
	maximumHp_ = 0;
	currentHp_ = 0;
}

const int Tower::GetMaximumHp() const
{
	return maximumHp_;
}

const int Tower::GetCurrentHp() const
{
	return currentHp_;
}

void Tower::SetMaximumHp(int maximumHp)
{
	maximumHp_ = maximumHp;
}

void Tower::SetCurrentHp(int currentHp)
{
    currentHp_ = currentHp;
}

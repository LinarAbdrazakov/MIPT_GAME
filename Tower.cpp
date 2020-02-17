#include "Tower.hpp"

Tower::Tower()
{
	type_ = 0;

	maximumHp_ = 0;
	currentHp_ = 0;
}

Tower::Tower(Object object, int type, int maximumHp, int currentHp): Object(object)
{
	type_ = type;

	maximumHp_ = maximumHp;
	currentHp_ = currentHp;
}

Tower::~Tower()
{
	type_ = 0;

	maximumHp_ = 0;
	currentHp_ = 0;
}

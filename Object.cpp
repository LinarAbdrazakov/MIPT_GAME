#include "Object.hpp"

Object::Object()
{
	coordinate_.x = 0;
	coordinate_.y = 0;

	speed_.x = 0;
	speed_.y = 0;

	dt_ = 0;
}

Object::Object(sf::Vector2f coordinate, sf::Vector2f speed, float* dt)
{
	coordinate_.x = coordinate.x;
	coordinate_.y = coordinate.y;

	speed_.x = speed.x;
	speed_.y = speed.y;

	dt_ = dt;
}

Object::~Object()
{
	coordinate_.x = 0;
	coordinate_.y = 0;

	speed_.x = 0;
	speed_.y = 0;

	dt_ = 0;
}

const sf::Vector2f Object::GetCoordinate() const
{
    return coordinate_;
}

const sf::Vector2f Object::GetSpeed() const
{
	return speed_;
}

const float* Object::GetDt() const
{
	return dt_;
}

void Object::SetCoordinate(sf::Vector2f coordinate)
{
    coordinate_ = coordinate;
}

void Object::SetSpeed(sf::Vector2f speed)
{
	speed_ = speed;
}

void Object::SetDt(float* dt)
{
	dt_ = dt;
}

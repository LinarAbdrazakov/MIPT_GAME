#include "Object.hpp"

Object::Object()
{
	id_     = 0;
	sprite_ = 0;

	coordinate_.x = 0;
	coordinate_.y = 0;

	speed_.x = 0;
	speed_.y = 0;

	size_.x = 0;
	size_.y = 0;

	dt_ = 0;
}

Object::Object(const Object& that)
{
	id_         = that.GetId();
	sprite_     = that.GetSprite();
	coordinate_ = that.GetCoordinate();
	speed_      = that.GetSpeed();
	size_       = that.GetSize();
	dt_         = that.GetDt();
}

Object::Object(int id, sf::Vector2f coordinate, sf::Vector2f speed, sf::Vector2i size, float* dt)
{
	id_     = id;
	sprite_ = 0; //sprite manager will be made here

	coordinate_.x = coordinate.x;
	coordinate_.y = coordinate.y;

	speed_.x = speed.x;
	speed_.y = speed.y;

	size_.x = size.x;
	size_.y = size.y;

	dt_ = dt;
}

Object::~Object()
{
	id_     = 0;
	sprite_ = 0;

	coordinate_.x = 0;
	coordinate_.y = 0;

	speed_.x = 0;
	speed_.y = 0;

	size_.x = 0;
	size_.y = 0;

	dt_ = 0;
}

const int Object::GetId() const
{
	return id_;
}
sf::Sprite* Object::GetSprite() const
{
    return sprite_;
}

const sf::Vector2f Object::GetCoordinate() const
{
    return coordinate_;
}

const sf::Vector2f Object::GetSpeed() const
{
	return speed_;
}

const sf::Vector2i Object::GetSize() const
{
	return size_;
}

float* Object::GetDt() const
{
	return dt_;
}

void Object::SetId (int id)
{
	id_ = id;
}

void Object::SetSprite (sf::Sprite* sprite)
{
	sprite_ = sprite;
}

void Object::SetCoordinate(sf::Vector2f coordinate)
{
    coordinate_ = coordinate;
}

void Object::SetSpeed(sf::Vector2f speed)
{
	speed_ = speed;
}

void Object::SetSize(sf::Vector2i size)
{
	size_ = size;
}

void Object::SetDt(float* dt)
{
	dt_ = dt;
}

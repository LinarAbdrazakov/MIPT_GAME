#include "Player.hpp"

Player::Player()
{
	team_  = 0;
	money_ = 0;
}

Player::Player(Object object, int team, int money):Object(object)
{
	team_  = team;
	money_ = money;
}

Player::~Player()
{
    team_  = 0;
	money_ = 0;
}

const int Player::GetTeam() const
{
	return team_;
}

const float Player::GetMoney() const
{
	return money_;
}

void Player::SetTeam(int team)
{
    team_ = team;
}

void Player::SetMoney(float money)
{
    money_ = money;
}

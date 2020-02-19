#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Object.hpp"

class Player: public Object
{
	private:
        int   team_;
        float money_;
	public:
    	explicit Player();
    	Player(Object, int, int);
    	~Player();

		const int   GetTeam()  const;
		const float GetMoney() const;

		void SetTeam (int);
		void SetMoney(float);
};

#endif

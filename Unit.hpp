#ifndef UNIT_HPP
#define UNIT_HPP

#include "Object.hpp"

class Unit: public Object
{
	private:
		int type_;

		int maximumHp_;
		int currentHp_;
		int recoveryHp_;

		int damage_;

	public:
    	explicit Unit();
    	Unit(Object, int, int, int, int, int);
    	~Unit();
};

#endif

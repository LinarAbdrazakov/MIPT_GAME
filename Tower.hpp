#ifndef TOWER_HPP
#define TOWER_HPP

#include "Object.hpp"

class Tower: public Object
{
	private:
		int type_;

		int maximumHp_;
		int currentHp_;

	public:
    	explicit Tower();
    	Tower(Object, int, int, int);
    	~Tower();
};

#endif

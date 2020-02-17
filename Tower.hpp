#ifndef TOWER_HPP
#define TOWER_HPP

#include "Object.hpp"

class Tower: public Object
{
	private:
		int maximumHp_;
		int currentHp_;

	public:
    	explicit Tower();
    	Tower(Object, int, int);
    	~Tower();

    	const int GetMaximumHp()  const;
		const int GetCurrentHp()  const;

		void SetMaximumHp (int);
		void SetCurrentHp (int);
};

#endif

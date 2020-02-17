#ifndef UNIT_HPP
#define UNIT_HPP

#include "Object.hpp"

class Unit: public Object
{
	private:
		int maximumHp_;
		int currentHp_;
		int recoveryHp_;
		int damage_;

	public:
    	explicit Unit();
    	Unit(Object, int, int, int, int);
    	~Unit();

		const int GetMaximumHp()  const;
		const int GetCurrentHp()  const;
		const int GetRecoveryHp() const;
		const int GetDamage()     const;

		void SetMaximumHp (int);
		void SetCurrentHp (int);
		void SetRecoveryHp(int);
		void SetDamage    (int);
};

#endif

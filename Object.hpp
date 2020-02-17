#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>

class Object
{
	private:
		sf::Vector2f coordinate_;
		sf::Vector2f speed_;
		float*       dt_;

	public:
		explicit Object();
		Object(sf::Vector2f, sf::Vector2f, float*);
		~Object();

		const sf::Vector2f GetCoordinate() const;
		const sf::Vector2f GetSpeed()      const;
		const float*       GetDt()         const;

		void SetCoordinate(sf::Vector2f);
		void SetSpeed(sf::Vector2f);
		void SetDt(float*);
};

#endif

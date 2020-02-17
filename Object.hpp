#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <SFML/Graphics.hpp>

class Object
{
	private:
		int          id_;
		sf::Sprite*  sprite_;
		sf::Vector2f coordinate_;
		sf::Vector2f speed_;
        sf::Vector2i size_;
		float*       dt_;

	public:
		explicit Object();
		Object(const Object&);
		Object(int, sf::Vector2f, sf::Vector2f, sf::Vector2i, float*);
		~Object();

		const int          GetId()         const;
		sf::Sprite*        GetSprite()     const;
		const sf::Vector2f GetCoordinate() const;
		const sf::Vector2f GetSpeed()      const;
		const sf::Vector2i GetSize()       const;
		float*             GetDt()         const;

		void SetId        (int);
		void SetSprite    (sf::Sprite*);
		void SetCoordinate(sf::Vector2f);
		void SetSpeed     (sf::Vector2f);
		void SetSize      (sf::Vector2i);
		void SetDt        (float*);
};

#endif

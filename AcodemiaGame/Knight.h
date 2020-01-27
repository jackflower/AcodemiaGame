#ifndef H_KNIGHT_ACODEMIA
#define H_KNIGHT_ACODEMIA

#include "SFML/Graphics.hpp"

class Knight
{
public:
	Knight();//konstruktor
	~Knight();//destruktor
	void setHealth(float health);
	const float getHealth() const;
private:
	float m_health;
	float m_damage;

	sf::Sprite duszek;

};
#endif//H_KNIGHT_ACODEMIA

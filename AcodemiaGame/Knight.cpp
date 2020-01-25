#include "Knight.h"

//konstruktor
Knight::Knight()
:
	m_health{ 100 },
	m_damage{ 20 }
{
}

//destruktor
Knight::~Knight()
{
	m_health = 0;
	m_damage = 0;
}

void Knight::setHealth(float health)
{
	m_health = health;
}

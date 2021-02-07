#include "Character.h"
Character::Character(string name)
{
	set_Name(name);
}

string Character::get_Name()
{
	return m_Name;
}

double Character::get_Health()
{
	return m_Health;
}

void Character::set_Name(string name)
{
	m_Name = name;
}

void Character::set_Health(double health)
{
	m_Health = health;
}
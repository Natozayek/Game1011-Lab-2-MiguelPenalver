#include "Weapon.h"

string Weapon::get_Weapon_Name()
{
	return m_W_Name;
}

string Weapon::get_Description()
{
	return m_Description;
}

double Weapon::get_Damage()
{
	return m_Damage;
}

string Weapon::get_sAbility()
{
	return m_sAbility;
}

void Weapon::set_Weapon_Name(string name)
{
	m_W_Name = name;
}

void Weapon::set_Description(string des)
{
	m_Description = des;
}

void Weapon::set_Damage(double dam)
{
	m_Damage = dam;
}

void Weapon::set_sAbility(string ab)
{
	m_sAbility = ab;
}
ostream& operator<<(ostream& out, Weapon* x_weapon)
{
	out << "\n Weapon name: " << x_weapon->get_Weapon_Name() << "\n Description: " << x_weapon->get_Description() << "\n Damage: " << x_weapon->get_Damage() << "\n Weapon ability: " << x_weapon->get_sAbility();
	return out;
}
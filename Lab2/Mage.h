#pragma once
#ifndef _MAGE_
#define _MAGE_
#include "Character.h"
#include <iostream>

class Mage : public Character
{
public:
	Mage(const string name) : Character(name)
	{
		set_Name(name);
		set_Health(100);
		set_Weapon();
	}
	void set_Name(string name)
	{
		name = "#MAGE " + name + " The lord of casters! \n";
		Character::set_Name(name);
	}
	void set_Weapon()
	{
		m_pWeapon = new Weapon;
		m_pWeapon->set_Weapon_Name("Stone of glory");
		m_pWeapon->set_Description("Un reveal an ancient and infinite thunder stone by shocking enemies");
		m_pWeapon->set_Damage(65);
		m_pWeapon->set_sAbility("Absorb enemy health, if they are 20% of health gets the kill.");
	}
	Weapon* get_Weapon_Created()
	{
		return m_pWeapon;
	}
	void Ability()
	{
		cout << " \n****MAGE SPECIAL ABILITY: Get +100% Max damage against Assassins if stone is upgraded**** \n";
	}
	void display_Info() override
	{
		cout << get_Name();
		cout <<" Health : "<< get_Health();
		cout << m_pWeapon;
		Ability();
	}
private:
	Weapon* m_pWeapon;
};


#endif
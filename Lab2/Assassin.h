#pragma once
#ifndef _ASSASSIN_
#define _ASSASSIN_
#include "Character.h"
#include <iostream>

class Assassin : public Character
{
public:
	Assassin(const string name) : Character(name)
	{
		set_Name(name);
		set_Health(75);
		set_Weapon();
		
	}
	void set_Name(string name)
	{
		name = "#ASSASSIN " + name + " The melee Assassin and a global threat to the enemies \n";
		Character::set_Name(name);
	}
	void set_Weapon()
	{
		m_pWeapon = new Weapon;
		m_pWeapon->set_Weapon_Name("Crippling Dagger");
		m_pWeapon->set_Description("this weapon will wreck unsuspecting foes in the battlefield ");
		m_pWeapon->set_Damage(65);
		m_pWeapon->set_sAbility("Cause movement slow for 2.5 seconds");
	}
	Weapon* get_Weapon_Created()
	{
		return m_pWeapon;
	}
	void Ability()
	{
		cout << " \n****ASSASSIN SPECIAL ABILITY: Get  75 % of Critical chance in the next ability attack after 6 seconds out of combat**** \n";
	}

	void display_Info() override
	{
		cout << get_Name();
		cout << " Health : "<< get_Health();
		cout << m_pWeapon;
		Ability();
	}
private:
	Weapon* m_pWeapon;
};


#endif


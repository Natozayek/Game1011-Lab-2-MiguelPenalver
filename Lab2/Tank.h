#pragma once
#ifndef _TANK_
#define _TANK_
#include "Character.h"
#include <iostream>
using namespace std;

class Tank : public Character
{
public:
	Tank(const string name) : Character(name)
	{
		set_Name(name);
		set_Health(200);
		set_Weapon();
		
	}
	void set_Name(string name)
	{
		name = "#TANK "+ name + " The toughest champion!... \n";
		Character::set_Name(name);
	}
	void set_Weapon()
	{
		m_pWeapon = new Weapon;
		m_pWeapon->set_Weapon_Name(" Misery of hell");
		m_pWeapon->set_Description(" A blade that was stolen from hell and extremely powerful");
		m_pWeapon->set_Damage(50);
		m_pWeapon->set_sAbility(" Deflect enemies attacks every 60 seconds, be wise!");
	}
	void Ability()
	{
		cout << "\n **** TANK ULTIMATE ABILITY: after 3 seconds of your death, comeback with 70% of life + 50% of speed movement for the next 5 seconds!**** \n";
	}
	Weapon* get_Weapon_Created()
	{
		return m_pWeapon;
	}

	void display_Info() override
	{
		cout << get_Name();
		cout <<" Health : " << get_Health();
		cout << m_pWeapon;
		Ability();
	}
private:
	Weapon* m_pWeapon;

};


#endif



#pragma once
#ifndef _WEAPON_
#define _WEAPON_
#include <iostream>
#include "Character.h"
using namespace std;
class Weapon 
{

public:
	Weapon() {};
	string get_Weapon_Name();
	string get_Description();
	string get_sAbility();
	double get_Damage();
	void set_Weapon_Name(string name);
	void set_Description(string des);
	void set_Damage(double dam);
	void set_sAbility(string ab);
	friend ostream& operator<<(ostream& out, Weapon* x_weapon);

private:
	string m_W_Name, m_Description, m_sAbility;
	double m_Damage;
};

#endif


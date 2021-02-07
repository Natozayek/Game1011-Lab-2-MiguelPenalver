#pragma once
#include <iostream>
#include <string>
#ifndef _CHARACTER_
#define _CHARACTER_
using namespace std;

class Character
{
public:
	Character() {};
	Character(string name);
	string get_Name();
	double get_Health();
	void set_Name(string name);
	void set_Health(double health);
	void set_Weapon(string name, string description, double damage, string ability);
	virtual void display_Info() = 0;
	virtual	~Character() {};
protected:
	double   m_Health;
	string  m_Name;
};

#endif


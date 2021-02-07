#include <iostream>
#include "Character.h"
#include "Weapon.h"
#include "Tank.h"
#include "Mage.h"
#include "Assassin.h"
#include "Invalidation.h"
#include<windows.h>
using namespace std;
int choice, choice2,choice3, heroes_N;
string m_Name;
Character* heroes[9] = { nullptr };
void color(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); // to make different color words and background
}
int main()
{
	do
	{
		color(64);
		// Main Menu
		while (choice == 0)
		{
			system("cls");
			cout << "	-_-_-_-_-_- Welcome to Dominion The ultimate MOBA game! -_-_-_-_-_-\n";
			cout << "\n	1. Create new Character.\n	2. View all Characters.	\n	3. Delete a Character\n	4. Exit Program\n ";
			cout << "	Choice: ";
			cin >> choice;
			invalid(choice);
			system("cls");
		}
		// Character Creation
		while (choice == 1)
		{
			cout << "################ Character Creation############### \n\n Please enter hero's name: ";
			cin.ignore();
			getline(cin, m_Name);
			system("cls");
			cout << "	Name: " << m_Name << endl;
			cout << "\n Please choose your Type of hero: \n	1. Tank \n	2. Mage \n	3. Assassin \n";
			cout << "Choice: ";
			cin >> choice2;
			invalid2(choice2);
			switch (choice2)
			{
				case 1:
				{
					for (int i = 0; i < 9; i++)
					{
						Character* m_pCharacter = heroes[i];
						if (m_pCharacter == nullptr)
						{
							heroes[i] = new Tank(m_Name);
							heroes_N++;
							cout << " \n Tank successfully created! \n";
							system("pause");
							choice = 0;
							break;
						}
					}break;
				}
				case 2:
				{
					for (int i = 0; i < 9; i++)
					{
						Character* m_pCharacter = heroes[i];
						if (m_pCharacter == nullptr)
						{
							heroes[i] = new Mage(m_Name);
							heroes_N++;
							cout << " \n Mage successfully created! \n";
							system("pause");
							choice = 0;
							break;
						}
					}break;
				}
				case 3:
				{
					for (int i = 0; i < 9; i++)
					{
						Character* m_pCharacter = heroes[i];
						if (m_pCharacter == nullptr)
						{
							heroes[i] = new Assassin(m_Name);
							heroes_N++;
							cout << " \n Assassin successfully created! \n";
							system("pause");
							choice = 0;
							break;
						}
					}break;
				}
			
			}
		}
		// View Character
		while (choice == 2)
		{
			if (heroes_N == 0)
			{
				cout << "You have not created any heroes! \n";
				system("pause");
			}
			else
			{
				for (int i = 0; i < 9; i++)
				{
					Character* m_pCharacter = heroes[i];
					if (m_pCharacter == nullptr)
					{
						continue;
					}
					cout <<" " <<i + 1 << ". ";
					m_pCharacter->display_Info();
					cout << endl;
				}
			}
			choice = 0;
			system("pause");
			system("cls");
		}
		// Delete Character
		while (choice == 3)
		{
			for (int i = 0; i < 9; i++)
			{
				Character* m_pCharacter = heroes[i];
				if (m_pCharacter == nullptr)
				{
					cout << i + 1 << ". EMPTY\n";
					continue;
				}
				cout << i + 1 << ". " << "Name: ";
				cout << m_pCharacter->get_Name() << "\n";
			}
			cout << "Select character to delete. Press 0 to return to the main menu ";
			cin >> choice3;
			if (choice3 == 0)
			{
				choice = 0;
				system("cls");
			}
			if (choice3 >= 1 && choice3 <= 9)
			{
				if (heroes[choice3 - 1] == nullptr)
				{
					system("cls");
					cout << "Invalid option\n";
				}
				else
				{
					delete heroes[choice3 - 1];
					heroes[choice3 - 1] = nullptr;
					system("cls");
				}
			}
		}
		if (choice == 4)
		{
			cout << "GAME OVER\n";
			system("pause");
			
		}
	}while (choice != 4);
	//Clean pointer
	for (int i = 0; i < 9; i++)
	{
		Character* m_pCharacter = heroes[i];
		delete m_pCharacter;
	}
}

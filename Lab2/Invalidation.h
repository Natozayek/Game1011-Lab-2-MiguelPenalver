#pragma once
#ifndef INVALIDATION_H
#define INVALIDATION_H
#include <string>
#include <iostream>
using namespace std;
int invalid(int& x)
{
    while (x < 1 || x > 4)
    {
        cout << "Invalid option \n Type again: ";
        cin >> x;
        if (x >= 1 && x <= 4)
        {
            return x;
        }

        else if (cin.fail()) // format/type failure, eg. 'asdf' for int
        {
            string line;
            cin.clear(); // clear fail state so we can read again
            getline(std::cin, line); // gets rid of bad input, also std::cin.ignore is an option
            cerr << "'" << line << "' is not a valid input! Try again. \n";

        }
        cin >> x;
    }

}

int invalid2(int& x)
{
    while (x < 1 || x > 3)
    {
        cout << "Invalid option \n Type again: ";
        cin >> x;
        if (x >= 1 && x <= 3)
        {
            return x;
        }
        else if (cin.fail()) // format/type failure, eg. 'asdf' for int
        {
            string line;
            cin.clear(); // clear fail state so we can read again
            getline(cin, line); // gets rid of bad input, also std::cin.ignore is an option
            cerr << "'" << line << "' is not a valid input! Try again. \n";

        }
        cin >> x;
    }

}


#endif // !INVALIDATION_H


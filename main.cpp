#include <iostream>
#include <string>

#include "utils.h"

using namespace std;

int main()
{
    string name;
    string password;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Password: ";
    cin >> password;

    if (login(name, password))
    {
        cout << "Success!" << endl;
    }
    else
    {
        cout << "Login Failed :(" << endl;
    }

    return 0;
}

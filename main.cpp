#include <iostream>
#include <string>

#include "utils.h"

using namespace std;

int main()
{
    string name;
    string password;

    cin >> name;
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

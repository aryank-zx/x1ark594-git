#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "passwords.h"

using std::string;

bool login(string name, string password)
{
    if (!userExists(name))
    {
        return false;
    }

    return getPassword(name) == password;
}

#endif

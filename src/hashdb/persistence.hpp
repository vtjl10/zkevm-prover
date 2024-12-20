#ifndef PERSISTENCE_HPP
#define PERSISTENCE_HPP

#include <string>

using namespace std;

enum Persistence
{
    PERSISTENCE_CACHE = 0,
    PERSISTENCE_DATABASE = 1,
    PERSISTENCE_TEMPORARY = 2,
    PERSISTENCE_TEMPORARY_HASH= 3,
    PERSISTENCE_SIZE = 4
};

string persistence2string (const Persistence persistence);

#endif
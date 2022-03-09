#include <iostream>
#include "Bibliotheque.h"

using namespace std;

ostream & operator<<(ostream & o, Bibliotheque & b)
{
    for (auto l : b.liste)
    {
        o << l->getDescription()<< endl ;
    }
    return o;
}


#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED
#include <vector>
#include <algorithm>
#include "Livre.h"

class Bibliotheque
{
    std::vector <Livre *> liste;
public:
    void ajoute(Livre * l)
    {
        liste.push_back(l);
    }
    void supprime(Livre *l) {
       liste.erase(std::remove(liste.begin(),liste.end(),l),liste.end());
    }
    void getDescriptions() {
        for (auto l : liste) {
            std::cout << l->getDescription() << std::endl;
        }
    }
};

#endif // BIBLIOTHEQUE_H_INCLUDED

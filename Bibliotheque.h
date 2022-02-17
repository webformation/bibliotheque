#ifndef BIBLIOTHEQUE_H_INCLUDED
#define BIBLIOTHEQUE_H_INCLUDED
#include <vector>
#include "Livre.h"

class Bibliotheque
{
    std::vector <Livre *> liste;
public:
    ajoute(Livre * l)
    {
        liste.push_back(l);
    }
    void getDescriptions() {
        for (auto l : liste) {
            std::cout << l->getDescription() << std::endl;
        }
    }
};

#endif // BIBLIOTHEQUE_H_INCLUDED

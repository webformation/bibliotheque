#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED
#include <iostream>
class Auteur
{
    std::string nom;
public:
    Auteur (std::string nom) : nom{nom} {}
    std::string getNom()
    {
        return nom;
    }
    bool operator==(const  Auteur & a)
    {
        if (this == & a) return true;
        return nom == a.nom;
    }
};

#endif // AUTEUR_H_INCLUDED

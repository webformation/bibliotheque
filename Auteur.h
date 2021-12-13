#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED
#include <iostream>
class Auteur
{
    std::string nom;
    static int nb;
public:
    Auteur (std::string nom) : nom{nom} { nb++;}
    Auteur(const Auteur &a) {
        nom = a.nom;
        nb++;
    }
    ~Auteur() {nb--;}
    static int getNb() {return nb;}
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

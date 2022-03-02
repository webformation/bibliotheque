#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#include "Auteur.h"
#include "Categorie.h"
#include "Empruntable.h"

class Livre
{
    std::string titre;
    Categorie categorie;
    Auteur * auteur = nullptr;
public:
    Livre(std::string titre, Categorie categorie, Auteur a ) :
        titre{titre}, categorie {categorie}
    {
        auteur = new Auteur{a};
    }
    Livre(std::string titre, Categorie categorie ) :
        titre{titre}, categorie {categorie} { }
    ~Livre()
    {
        if (auteur != nullptr)
        {
            delete auteur;
        }
    }
    virtual std::string getDescription() {
        std::string s = titre + " (" + CatDetail[categorie] + ")";
        if (auteur != nullptr) s += ", " + auteur->getNom();
        return s;
    }
    bool operator==(const  Livre & l) {
        if (this == & l) return true;
        return titre == l.titre
        && categorie == l.categorie
        && ((auteur == l.auteur)?true:(*auteur == *(l.auteur)));
    }
};

class LivreEmpruntable: public Livre, public Empruntable {
    using Livre::Livre;
};
#endif // LIVRE_H_INCLUDED

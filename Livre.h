#ifndef LIVRE_H_INCLUDED
#define LIVRE_H_INCLUDED

#include "Auteur.h"
#include "Categorie.h"
#include "Empruntable.h"
#include <exception>

class exceptLivre : public std::logic_error
{
    using std::logic_error::logic_error;
};
class Livre
{
    std::string titre;
    Categorie categorie;
    Auteur * auteur = nullptr;
public:
    Livre(std::string titre, Categorie categorie, Auteur a ) :
        Livre(titre, categorie)
    {
        auteur = new Auteur{a};
    }
    Livre(std::string titre, Categorie categorie ) :
        categorie {categorie}
    {
        if (titre.length() == 0) throw exceptLivre("titre vide");
        this->titre = titre;
    }
    ~Livre()
    {
        if (auteur != nullptr)
        {
            delete auteur;
        }
    }
    virtual std::string getDescription()
    {
        std::string s = titre + " (" + CatDetail[categorie] + ")";
        if (auteur != nullptr) s += ", " + auteur->getNom();
        return s;
    }
    bool operator==(const  Livre & l)
    {
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

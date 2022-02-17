#ifndef LIVRECLASSE_H_INCLUDED
#define LIVRECLASSE_H_INCLUDED
#include "Livre.h"

class LivreClasse: public Livre
{
    std::string matiere;
    std::string niveau;
public:
    LivreClasse(std::string titre, std::string matiere, std::string niveau ) :
        Livre(titre, LCLASSE ),
        matiere{matiere}, niveau {niveau} { }
    LivreClasse(std::string titre, std::string auteur,std::string matiere, std::string niveau ) :
        Livre(titre, LCLASSE,auteur ),
        matiere{matiere}, niveau {niveau} { }
    virtual std::string getDescription() override
    {
        return Livre::getDescription() + "," + matiere + ", " + niveau;
    }
    bool operator==(const  LivreClasse & l)
    {
        if (this == & l) return true;
        return Livre::operator==(l)
               && matiere == l.matiere && niveau == l.niveau;
    }
};

#endif // LIVRECLASSE_H_INCLUDED

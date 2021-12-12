#ifndef CATEGORIE_H_INCLUDED
#define CATEGORIE_H_INCLUDED
#include <map>

enum Categorie {ROMAN, BIOGRAPHIE, LCLASSE, DOCUMENTAIRE};

std::map<Categorie,std::string> CatDetail {
    {ROMAN, "Roman"},
    {BIOGRAPHIE, "Biographie"},
    {LCLASSE, "Classe"},
    {DOCUMENTAIRE, "Documentaire"}
};

#endif // CATEGORIE_H_INCLUDED

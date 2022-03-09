#ifndef CATEGORIE_H_INCLUDED
#define CATEGORIE_H_INCLUDED
#include <map>
#include <iostream>

enum Categorie {ROMAN, BIOGRAPHIE, LCLASSE, DOCUMENTAIRE};

extern std::map<Categorie,std::string> CatDetail;

#endif // CATEGORIE_H_INCLUDED

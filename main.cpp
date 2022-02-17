#include <iostream>
#include "Livre.h"
#include "LivreClasse.h"
#include "Bibliotheque.h"

using namespace std;

int main()
{

    Livre l1("Vive le C++", LCLASSE);
    Livre l2("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    Livre l3("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    LivreClasse lc1{"Grammaire anglaise", "Langue", "Terminale"};
    LivreClasse lc2{"Grammaire anglaise", "Langue", "Terminale"};
    LivreClasse lc3{"Grammaire allemande", "Langue", "Terminale"};
    LivreClasse lc4{"Grammaire anglaise", "Langue", "Terminale"};
    Bibliotheque b1;
    b1.ajoute(&l1);
    b1.ajoute(&lc3);
    b1.getDescriptions();
    return 0;
}

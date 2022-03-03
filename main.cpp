#include <iostream>
#include "Livre.h"
#include "LivreClasse.h"
#include "Bibliotheque.h"

using namespace std;

int main()
{

    Livre l1("Vive le C++", LCLASSE);
    try {
    Livre l10("", LCLASSE);
    }
    catch (exception & e) {
        cout << e.what() << endl;
    }
    Livre l2("La Servante �carlate ", ROMAN,Auteur("Margaret Atwood"));
    Livre l3("La Servante �carlate ", ROMAN,Auteur("Margaret Atwood"));
    LivreClasse lc1{"Grammaire anglaise", "Langue", "Terminale"};
    LivreClasse lc2{"Grammaire anglaise", "Langue", "Terminale"};
    LivreClasse lc3{"Grammaire allemande", "Langue", "Terminale"};
    LivreClasse lc4{"Grammaire anglaise", "Langue", "Terminale"};
    Bibliotheque b1;
    b1.ajoute(&l1);
    b1.ajoute(&lc3);
    b1.ajoute(&lc2);
    b1.ajoute(&l2);
    b1.getDescriptions();
    b1.supprime(&lc3);
    cout << "-------------------" << endl;
    b1.getDescriptions();
    return 0;
}

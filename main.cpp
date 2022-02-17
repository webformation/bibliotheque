#include <iostream>
#include "Livre.h"
#include "LivreClasse.h"
using namespace std;

int main()
{
    Auteur vh("Victor Hugo");
    Auteur ma("Margaret Atwood");
    if (vh == ma) {
        cout << "Meme auteur\n";
    }
    else
    {
        cout << "Auteurs différents\n";
    }

    Livre l1("Vive le C++", LCLASSE);
    cout << Auteur::getNb() << endl;
    Livre l2("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    cout << Auteur::getNb() << endl;
    cout << l1.getDescription() << endl;
    cout << l2.getDescription() << endl;
    cout << boolalpha << (l1== l1) << endl;
    cout << boolalpha << (l1== l2) << endl;
    Livre l3("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    cout << Auteur::getNb() << endl;
    cout << boolalpha << (l2== l3) << endl;
    LivreClasse lc1{"Grammaire anglaise", "Langue", "Terminale"};
    cout << lc1.getDescription() << endl;
    Livre * pl = & lc1;
    cout << pl->getDescription() << endl;
    LivreClasse lc2{"Grammaire anglaise", "Langue", "Terminale"};
    cout << boolalpha << (lc1== lc2) << endl;
    LivreClasse lc3{"Grammaire allemande", "Langue", "Terminale"};
    cout << boolalpha << (lc1== lc3) << endl;
    LivreClasse lc4{"Grammaire anglaise", "Langue", "Terminale"};
    cout << boolalpha << (lc1== lc4) << endl;
    return 0;
}

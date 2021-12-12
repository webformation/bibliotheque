#include <iostream>
#include "Livre.h"
#include "LivreClasse.h"
using namespace std;

int main()
{
    Livre l1("Vive le C++", LCLASSE);
    Livre l2("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    cout << l1.getDescription() << endl;
    cout << l2.getDescription() << endl;
    cout << boolalpha << (l1== l1) << endl;
    cout << boolalpha << (l1== l2) << endl;
    Livre l3("La Servante écarlate ", ROMAN,Auteur("Margaret Atwood"));
    cout << boolalpha << (l2== l3) << endl;
    LivreClasse lc1{"Grammaire anglaise", "Langue", "Terminale"};
    cout << lc1.getDescription() << endl;
    return 0;
}

#ifndef EMPRUTNABLE_H_INCLUDED
#define EMPRUTNABLE_H_INCLUDED

#include <chrono>
#include <ctime>

class Empruntable
{
protected:
    std::string emprunteur;
    std::string dateEmprunt;
public:
    Empruntable() : emprunteur{""}, dateEmprunt {""} {}
    void emprunte(std::string nom)
    {
        emprunteur = nom;
        std::time_t maintenant =
            std::chrono::system_clock::to_time_t(
                std::chrono::system_clock::now()
            );
        dateEmprunt =std::ctime(&maintenant);
    }
    void rend()
    {
        emprunteur = "";
    }
    bool estEmprunte()
    {
        return emprunteur != "";
    }
};

#endif // EMPRUTNABLE_H_INCLUDED

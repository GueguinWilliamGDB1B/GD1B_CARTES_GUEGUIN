#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include <string>
#include <vector>

class Monstre{

    private:
        std::string _NomMonstre;
        int _PV;
        int _Atq;
        int _AdversairePV;
        int _AdversaireAtq;
        int _CompteurAtq;

    public:
       void Attaquer();
       void Etat();
       void AfficheInfo();


};
#endif


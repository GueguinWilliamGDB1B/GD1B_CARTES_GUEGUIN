#ifndef DEF_MAGE
#define DEF_MAGE

#include <string>
#include <vector>
#include "Monstre.h"


class Mage{

    private:
        std::string _NomMage;
        std::string _ZonesMonstre[5];
        std::string _Main[i];
        int _PVMage;
        int _MageAdversePV;
        int _Mana;
        int _StockSortDegat;
        int _StockSortSoin;
        

    public:
       void NouveauMonstre();
       void EtatMage();
       void AttaquerMage();
       void AttaquerMonstre();
       void AfficheInfo();
       void TestVictoire();
       void NouveauTour();
       void UtiliserSortDegat();
       void UtiliserSortSoin();


};
#endif
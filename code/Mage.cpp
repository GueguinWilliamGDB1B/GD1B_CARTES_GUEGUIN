#include <string>
#include <iostream>
#include <vector>
#include "Monstre.cpp"
#include "Mage.h"
#include "Monstre.h"



void NouveauMonstre(){

}

void EtatMage(){
    if (_PVMage < 1){
        std::cout << "Votre mage est mort, vous avez perdu la partie." std::endl;
    }
}
void TestVictoire(){
    if (_MageAdversePV < 1){
        std::cout << "Le mage adverse est mort, vous avez gagné la partie."<< std::endl;
    }
}

void AttaquerMage(){
    int input;
    cout << "Quel monstre voulez-vous faire attaquer ? 1, 2, 3, 4 ou 5 ";
    cin >> input;
    if (input == 1 ){
        _MageAdversePV = _MageAdversePV - _ZonesMonstre[0]._Atq;
    }
    if (input == 2 ){
        _MageAdversePV = _MageAdversePV - _ZonesMonstre[1]._Atq;
    }
    if (input == 3 ){
        _MageAdversePV = _MageAdversePV - _ZonesMonstre[2]._Atq;
    }
    if (input == 4 ){
        _MageAdversePV = _MageAdversePV - _ZonesMonstre[3]._Atq;
    }
    if (input == 5 ){
        _MageAdversePV = _MageAdversePV - _ZonesMonstre[4]._Atq;
    }
    else{
        std::cout <<"Erreur, veuillez séléctionner un monstre entre 1 et 5"<< std::endl;
    }

}

void AttaquerMonstre(){
    int input;
    cout << "Quel monstre voulez-vous faire attaquer ? 1, 2, 3, 4 ou 5 ";
    cin >> input;
    if (input == 1 ){
        _ZonesMonstre[0](Attaquer); 
    }
    if (input == 2 ){
        _ZonesMonstre[1](Attaquer); 
    }
    if (input == 3 ){
        _ZonesMonstre[2](Attaquer); 
    }
    if (input == 4 ){
        _ZonesMonstre[3](Attaquer); 
    }
    if (input == 5 ){
        _ZonesMonstre[4](Attaquer); 
    }
    else{
        std::cout <<"Erreur, veuillez séléctionner un monstre entre 1 et 5"<< std::endl;
    }

}

void AfficheInfo(){
    std::cout <<"Votre mage" << _NomMage << " a"<< std:: endl;
    std::cout << _PVMage<< "points de vie."<< std:: endl;
    std::cout <<  "Votre mage à sur vos zones de jeu"<< std:: endl;
    std::cout << _NomMonstre << "sur votre zone de jeu" << _ZonesMonstre[0] << ","<< std::endl;
    std::cout << _NomMonstre << "sur votre zone de jeu" << _ZonesMonstre[1] << ","<< std::endl;
    std::cout << _NomMonstre << "sur votre zone de jeu" << _ZonesMonstre[2] << ","<< std::endl;
    std::cout << _NomMonstre << "sur votre zone de jeu" << _ZonesMonstre[3] << "et"<< std::endl;
    std::cout << _NomMonstre << "sur votre zone de jeu" << _ZonesMonstre[4] << std::endl;
    
    
}


void NouveauTour(){
    _Mana = 10;
    _CompteurAtq = 0;
    _Main[i](NouveauMonstre);

}



void UtiliserSortDegat(){

}


void UtiliserSortSoin(){
    int input;
    cout << "Quel monstre voulez-vous faire soigner ? 1, 2, 3, 4 ou 5 ";
    cin >> input;
    if (input == 1 ){
        _ZonesMonstre[0]._PV = _PV + 5; 
    }
    if (input == 2 ){
        _ZonesMonstre[1]._PV = _PV + 5; 
    }
    if (input == 3 ){
        _ZonesMonstre[2]._PV = _PV + 5; 
    }
    if (input == 4 ){
        _ZonesMonstre[3]._PV = _PV + 5; 
    }
    if (input == 5 ){
        _ZonesMonstre[4]._PV = _PV + 5; 
    }
    else{
        std::cout <<"Erreur, veuillez séléctionner un monstre entre 1 et 5"<< std::endl;
    }

}
//infostd::string _NomMage;
        std::string _ZonesMonstre[5];
        int _PVMage;
        int _MageAdversePV;
        int _AdversairePV;




         std::string _NomMonstre;
        int _PV;
        int _Atq;
        int _AdversairePV;
        int _AdversaireAtq;
        int _CompteurAtq;
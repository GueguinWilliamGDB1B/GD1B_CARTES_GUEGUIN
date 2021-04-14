#include <string>
#include <iostream>
#include "Monstre.h"

void Attaquer(){ 
    if (_CompteurAtq = 0){ 
        _AdversairePV = _AdversairePV-_Atq;
        _PV = _PV - _AdversaireAtq;
        _CompteurAtq = 1;

    }
    else {
        std::cout << _NomMonstre << "a déjà attaqué pour ce tour." << std::endl;
    }
}
        
void Etat(){ 
    if (_PV < 1){

        std::cout << "Votre mostre" << _NomMonstre << "est mort."<< std:: endl;
    }
}
    
void AfficheInfo(){
    std::cout <<"Votre monstre" << _NomMonstre << " a"<< std:: endl;
    std::cout << _PV<< "points de vie,"<< std:: endl;
    std::cout << _Atq<< "points de dégat et "<< std:: endl;
    if (_CompteurAtq = 0){
        std::cout <<"peux attaquer pour ce tour."<< std::endl;
    }
    else{
        std::cout <<"ne peux plus attaquer pour ce tour."<< std::endl;
    }
}






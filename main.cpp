#include<iostream>
#include "Tele.hpp"
#include "Radio.hpp"
#include "voiture.hpp"
using namespace std;

int main(){
    cout<<"Voiture"<<endl;
    Voiture car;
    car.displayVoiture();
    car.displayPneus();
    car.addPneus(4);
    car.peindre("blanc");
    car.addPlace(6);
    car.displayVoiture();

    cout<<"Radio"<<endl;
    Radio maRadio;
    maRadio.reglerVolume(15);
    maRadio.changeStatut();
    maRadio.charger();
    maRadio.changeStatut();
    car.recharger();

    cout<<"Television"<<endl;
    Tele maTele;
    maTele.changePouce(32);
    maTele.changeEpaisseur(5);
    maTele.changeStatut();
    maTele.charger();
    maTele.changeStatut();
    car.recharger();
    maTele.displayTele();

    return 0;
}
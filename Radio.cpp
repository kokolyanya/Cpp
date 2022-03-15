#include<iostream>
#include "Radio.hpp"
using namespace std;

Radio::Radio()
{
    couleur="gris";
    statut="courant";
    volume=10;
    chargeRadio=100;
};
void Radio::reglerVolume(int vol)
{
    volume=vol;
    cout<<"votre volume est desormais "<< volume<<endl;
}
void Radio::charger()
{
    batterieVoiture.utiliser(chargeRadio);
}
void Radio::changeStatut()
{
    if(statut=="courant")
    {
        statut="batterie";
        charger();
        cout<<"vous utilisez desormais la batterie"<<endl;
    }
    else
    {
        statut="courant";
        cout<<"vous utilisez desormais le courant"<<endl;
    }
}

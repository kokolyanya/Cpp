#include<iostream>
#include"Batterie.hpp"
using namespace std;

Batterie::Batterie()
{
    etat=true;
    charge=200;
};
void Batterie::charger()
{
    while(charge<200)
    {
        charge++;
    }
}
void Batterie::utiliser(int chargeObjet)
{
    charge-=chargeObjet;
    if(charge<15)
    {
        etat=false;
    }
}
void Batterie::afficheEtat()
{
    if(etat==true)
        {
            cout<<"batterie en bonne etat"<<endl;
        }
    else
        {
            cout<<"batterie faible"<<endl;
        }
}
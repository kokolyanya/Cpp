#include "voiture.hpp"
Voiture::Voiture()
{
    nbPneus=4;
    couleur="noir";
    nbPlace=5;
    pneu=true;

};

int Voiture::displayPneus()
{
    if(pneu!=true)
        nbPneus--;
    return nbPneus;
}
void Voiture::addPneus(int nombrePneus)
{
    while(nbPneus!=nombrePneus)
        nbPneus++;
}
void Voiture::peindre(string coul)
{
     couleur=coul;
}
void Voiture::addPlace(int nombrePlace)
{
    while(nbPlace!=nombrePlace)
        nbPlace++;
}
void Voiture::recharger()
{
    batterieVoiture.charger();
}

void Voiture::displayVoiture()
{
    cout<< "nbPneus: "<< nbPneus<< "\tcouleur: "<< couleur<< "\tnbPlace: "<< nbPlace<< endl;
}
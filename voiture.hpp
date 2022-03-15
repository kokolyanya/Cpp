#ifndef VOITURE_HPP
#define VOITURE_HPP
#include<iostream>
#include "Batterie.hpp"
using namespace std;

class Voiture
{
    //attribut
    private:
    int nbPneus;
    bool pneu;
    string couleur;
    int nbPlace;
    Batterie batterieVoiture;

    //methode
    public:
    Voiture();

    int displayPneus();
    void addPneus(int nombrePneus);
    void peindre(string couleur);
    void addPlace(int nbPlace);
    void recharger();
    void displayVoiture();
    
};
#endif
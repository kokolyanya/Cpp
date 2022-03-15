#ifndef TELE_HPP
#define TELE_HPP
#include<iostream>
#include "Batterie.hpp"
using namespace std;
class Tele
{
    //attribut
    private:
    int pouce;
    int epaisseur;
    Batterie batterieVoiture;
    int chargeTele;
    string statut;
    string couleur;

    //membre
    public:
    Tele();
    void changePouce(int newPouce);
    void changeEpaisseur(int newEpaiss);
    void charger();
    void changeStatut();
    void displayTele();
};
#endif
#ifndef RADIO_HPP
#define RADIO_HPP
#include<iostream>
#include "Batterie.hpp"
using namespace std;
class Radio
{
    //attribut
    public:
    string statut;
    Batterie batterieVoiture;
    int volume;
    int chargeRadio;

    private:
    string couleur;

    //methode
    public:
    Radio();
    void reglerVolume(int vol);
    void changeStatut();
    void charger();
};
#endif
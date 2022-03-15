#ifndef BATTERIE_HPP
#define BATTERIE_HPP
class Batterie
{
    //attributs
    private:
        bool etat;
        int charge;

    //methode
    public:
        Batterie();
        void charger();
        void utiliser(int chargeObjet);
        void afficheEtat();
};
#endif
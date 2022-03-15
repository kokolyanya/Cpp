#include "Tele.hpp"
Tele::Tele()
{
     pouce=22;
     epaisseur=3;
     couleur="noir";
     chargeTele=100;
     statut="courant";
};
void Tele::changePouce(int newPouce)
{
    pouce=newPouce;
}
void Tele::changeEpaisseur(int newEpaiss)
{
    epaisseur=newEpaiss;
}
void Tele::charger()
{
    batterieVoiture.utiliser(chargeTele);
}
void Tele::changeStatut()
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
void Tele::displayTele()
{
    cout<<"votre television: "<<endl;
    cout<<"Pouce: "<<pouce<<"\tEpaisseur: "<<epaisseur<<"\tCouleur: "<<couleur<<"\tStatut: "<<statut<<endl;
}
#include<iostream>
#include<string>
#include "Reseau.hpp"

using namespace std;

Reseau::Reseau()
{
    string choix;
    cout<<"Entrez le nom de la page(stop pour arreter)"<<endl;
    cin>>choix;
    while(choix!="stop")
    {
        if(find(vecPages.begin(),vecPages.end(),choix))
        {}
        cout<<"Entrez le nom de la page(stop pour arreter)"<<endl;
        cin>>choix;
    }
}

bool operator==(Page &p1,Page &p2)
{
    return p1.nom==p2.nom;
}
#include "reseau1.hpp"
#include <iterator>
#include<iostream>
using namespace std;

Reseau1::Reseau1(){
	/**
    * \fn Reseau1()
    * \brief Constructeur d'un réseau
    * 
    * \author Loris
    */
}

Reseau1::~Reseau1(){
	/**
    * \fn ~Reseau1()
    * \brief Destructeur d'un réseau
    * 
    * \author Loris
    */

    for(PageMere* p : pages)
        delete p;
}

list<PageMere*> Reseau1::Voisin(PageMere *p){
    /**
    * \fn Voisin(PageMere *p)
    * \brief Renvoie les pages voisines d'une page
    * 
    * \author Loris
    *
    * \param p
    * 
    * \return p->getPageVoisine()
    */

    return p->getPageVoisine();
}

void Reseau1::afficherReseau() const{
    /**
    * \fn afficherReseau()
    * \brief Affichage du Réseau
    * 
    * \author Loris
    */

    cout<<"Page :{";
    for(PageMere* p1 : pages)
    {
        if(p1 == pages.back())
            p1->afficherPage();
        else{
            p1->afficherPage();
            cout<<" ,";
        }
    }
    cout<<" }"<<endl;
    cout<<"Pages accesibles :"<<endl;

    for(PageMere* p2 : pages)
    {
        p2->afficherVoisines();
    }
}

// Fonction supplémentaires
void Reseau1::insererHyperliens(PageMere *p1,PageMere *p2){}
vector<int> Reseau1::remplirLigne(PageMere *p){}
void Reseau1::remplirMatrice(){}
bool Reseau1::trouverDansPageVoisine(PageMere *p1, PageMere *p2){}

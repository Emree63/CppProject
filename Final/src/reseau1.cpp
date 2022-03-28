#include "reseau1.hpp"
#include <iterator>
#include<iostream>
using namespace std;

Reseau1::Reseau1(){
	/**
    * \fn Reseau1()
    * \brief Constructeur d'un réseau
    */
}

Reseau1::~Reseau1(){
	/**
    * \fn ~Reseau1()
    * \brief Destructeur d'un réseau
    */

    for(PageMere* p : pages)
        delete p;
}

void Reseau1::inserer(PageMere* p){
    /**
    * \fn inserer(PageMere* p)
    * \brief Inserer une page dans la liste des pages du Réseau
    *
    * \param p 
    */

    pages.insert(pages.end(), p);
}

list<PageMere*> Reseau1::Voisin(PageMere *p){
    /**
    * \fn Voisin(PageMere *p)
    * \brief Renvoie les pages voisines d'une page
    *
    * \param p
    * 
    * \return p->getPageVoisine()
    */

    return p->getPageVoisine();
}

void Reseau1::afficherReseau(){
    /**
    * \fn afficherReseau()
    * \brief Affichage du Réseau
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

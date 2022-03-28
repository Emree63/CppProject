#include "reseau1.hpp"
#include "pile.hpp"
#include <iterator>
#include<iostream>
using namespace std;

Reseau1::Reseau1(){
	/**
    * \fn Reseau1()
    * \brief Constructeur d'un réseau.
    */
}

Reseau1::~Reseau1(){
    for(PageMere* p : pages)
        delete p;
}

void Reseau1::inserer(PageMere* p){
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */

    pages.insert(pages.end(), p);
}

list<PageMere*> Reseau1::Voisin(PageMere *p){
    /**
    * \fn Voisin(Page *p)
    * \brief Renvoie les pages voisines d'une page. .
    *
    * \param p Page.
    * 
    * \return p->getPVoisine()
    */

    return p->getPageVoisine();
}
void Reseau1::insererHyperliens(PageMere *p1,PageMere *p2){

}

void Reseau1::afficherReseau(){
    /**
    * \fn operator<<(ostream &s,Reseau &r)
    * \brief Opérateur d'affichage du Réseau .
    *
    * \param s 
    * \param r Reseau.
    * 
    * \return s
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

vector<int> Reseau1::remplirLigne(PageMere *p){

}

void Reseau1::remplirMatrice(){

}

bool Reseau1::trouverDansPageVoisine(PageMere *p1, PageMere *p2){

}

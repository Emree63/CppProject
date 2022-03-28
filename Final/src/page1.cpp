#include "page1.hpp"
#include <iostream>
using namespace std;

Page1::Page1(string nom): PageMere(nom){
	/**
    * \fn Page1(string nom)
    * \brief Constructeur d'une page
    *
    * \param nom 
    */
}

Page1::~Page1(){
	/**
    * \fn ~Page1()
    * \brief Destructeur d'une page
    */
}

void Page1::ajoutVoisine(std::list<PageMere*> voisine){
	/**
    * \fn ajoutVoisine(std::list<PageMere*> voisine)
    * \brief Ajouter une liste de voisines la lise des pages
    *
    * \param voisine liste des pages voisines d'une page
    */

	pageVoisine=voisine;
}

list<PageMere*> Page1::getPageVoisine(){
    /**
    * \fn getPageVoisine()
    * \brief Renvoie la liste des pages directement accessible depuis la page
    * 
	* \return pageVoisine
    */

    return pageVoisine;
}

void Page1::afficherVoisines(){
	/**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines d'une page
    */

    cout<<getNom()<<" : {";
    for(PageMere *p : pageVoisine)
    {   if(p == pageVoisine.back())
            p->afficherPage();
        else{
            p->afficherPage();
            cout<<" ,";
        }
    }
    cout<<"}"<<endl;
}
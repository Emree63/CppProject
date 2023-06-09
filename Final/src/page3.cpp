#include <iostream>
#include "page3.hpp"
using namespace std;

Page3::Page3(string nom): PageMere(nom){
	/**
    * \fn Page3(string nom)
    * \brief Constructeur d'une page
    * 
    * \author Noémie & Laurine
    *
    * \param nom 
    */
}

Page3::~Page3(){
	/**
    * \fn ~Page3()
    * \brief Destructeur d'une page
    * 
    * \author Noémie & Laurine
    */
}

void Page3::ajoutVoisine(std::list<PageMere*> voisine)
{
	/**
    * \fn ajoutVoisine(std::list<PageMere*> voisine)
    * \brief Ajouter une liste de voisines la lise des pages
    * 
    * \author Noémie & Laurine
    *
    * \param voisine liste des pages voisines d'une page
    */

    pageVoisine=voisine;
}

list<PageMere*> Page3::getPageVoisine() const{
    /**
    * \fn getPageVoisine()
    * \brief Renvoie la liste des pages directement accessible depuis la page
    * 
    * \author Noémie & Laurine
    * 
	* \return pageVoisine
    */

    return pageVoisine;
}

void Page3::afficherVoisines()
{
 	/**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines d'une page
    * 
    * \author Noémie & Laurine
    */

    cout<<nom<<" : {";
    for(PageMere* p : pageVoisine)
    {
        if(p!=pageVoisine.back()){
            p->afficherPage();
            cout<<" ,";
        }
        else
            p->afficherPage();
    }
    cout<<" }"<<endl;
}
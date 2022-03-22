#include <iostream>
#include <string>
#include "page.hpp"

using namespace std;

Page::Page(string nom): nom(nom){
	/**
    * \fn Page(string nom)
    * \brief Constructeur d'une page.
    *
    * \param nom 
    */
}

Page::~Page(){
	/**
    * \fn ~Page()
    * \brief Destructeur d'une page.
    */
}

string Page::getNom(){
	/**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page.
    *
    * \return nom
    */

	return nom;
}

void Page::ajoutVoisine(std::list<Page*> voisine){
	/**
    * \fn ajoutVoisine(std::vector<Page*> voisine)
    * \brief Ajouter une voisine le tableau de Page.
    *
    * \param voisine liste de pages.
    */

	pageVoisine=voisine;
}

ostream & operator <<(ostream &s, Page &p){
	/**
    * \fn operator <<(ostream &s, Page &p)
    * \brief Operateur d'affichage de nom d'une page
    *
    * \param p Page
    * 
	* \return s
    */

	s<<p.getNom();
	return s;
}

list<Page*> Page::getPVoisine(){
    /**
    * \fn getPVoisine()
    * \brief Renvoie la liste des pages directement accessible depuis la page.
    * 
	* \return s
    */

    return pageVoisine;
}

void Page::afficherVoisines(){
	/**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines du page.
    */

    cout<<nom<<" : {";
    for(Page *p : pageVoisine)
    {   if(p==pageVoisine.back())
            cout<<*p;
        else
            cout<<*p<<" ,";
    }
    cout<<"}"<<endl;
}
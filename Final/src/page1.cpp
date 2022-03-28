#include "page1.hpp"
#include <iostream>
using namespace std;

Page1::Page1(string nom): PageMere(nom){
	/**
    * \fn Page1(string nom)
    * \brief Constructeur d'une page.
    *
    * \param nom 
    */
}

Page1::~Page1(){
	/**
    * \fn ~Page1()
    * \brief Destructeur d'une page.
    */
}

string Page1::getNom(){
	/**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page.
    *
    * \return nom
    */

	return nom;
}

void Page1::afficherPage(){
    /**
    * \fn operator <<(ostream &s, Page &p)
    * \brief Operateur d'affichage de nom d'une page
    *
    * \param p Page
    * 
	* \return s
    */

	cout<<getNom();
}

void Page1::ajoutVoisine(std::list<PageMere*> voisine){
	/**
    * \fn ajoutVoisine(std::vector<Page*> voisine)
    * \brief Ajouter une voisine le tableau de Page.
    *
    * \param voisine liste de pages.
    */

	pageVoisine=voisine;
}

list<PageMere*> Page1::getPageVoisine(){
    /**
    * \fn getPVoisine()
    * \brief Renvoie la liste des pages directement accessible depuis la page.
    * 
	* \return s
    */

    return pageVoisine;
}

void Page1::afficherVoisines(){
	/**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines du page.
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
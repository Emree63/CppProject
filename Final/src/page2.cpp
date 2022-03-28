#include "page2.hpp"
#include <iostream>
using namespace std;

Page2::Page2(string nom): PageMere(nom){
	/**
    * \fn Page(string nom)
    * \brief Constructeur d'une page.
    *
    * \param nom
    */
}

Page2::~Page2(){
	/**
    * \fn ~Page()
    * \brief Destructeur d'une page.
    */
}

string Page2::getNom(){	
	/**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page.
    *
    * \return nom
    */

	return nom;
}

void Page2::afficherPage(){
	/**
    * \fn operator<<(ostream &s, Page &p)
    * \brief Operateur d'affichage de nom d'une page
    *
    * \param p Page
    */

	cout<<nom;
}

list<PageMere*> Page2::getPageVoisine(){

}

void Page2::ajoutVoisine(std::list<PageMere*> voisine){

}

void Page2::afficherVoisines(){

}
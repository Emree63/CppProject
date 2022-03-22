#include <iostream>
#include <vector>
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

void Page::afficherChemin(list <Page*> chemin){
	/**
    * \fn afficherChemin(list <Page*> chemin)
    * \brief Affiche tout les pages
    *
    * \param chemin 
    * 
    */

	cout<<"Liste des pages accessibles : "<<endl;
	for(Page* p: chemin)
	{
		cout<<*this<<endl;
	}
}

ostream &operator<<(ostream &s, Page &p){
	/**
    * \fn operator<<(ostream &s, Page &p)
    * \brief Operateur d'affichage de nom d'une page
    *
    * \param p Page
    * 
	* \return s ostream
    */

	s<<p.getNom();
	return s;
}
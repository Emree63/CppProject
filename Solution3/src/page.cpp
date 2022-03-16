#include <iostream>
#include <vector>
#include <string>
#include "page.hpp"

using namespace std;

int Page::numero=0;

Page::Page(string nom): nom(nom){}

Page::~Page(){} 

string Page::getNom()
{	
	/**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page.
    *
    * \return nom
    */
	return nom;
}

// list <Page*> Page::chemin(Page* p)
// {

// }

void Page::afficherChemin(list <Page*> chemin)
{
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

ostream & operator <<(ostream &s, Page &p)
{
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

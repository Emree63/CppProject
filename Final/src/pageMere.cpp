#include "pageMere.hpp"
#include <iostream>
using namespace std;

PageMere::PageMere(string nom): nom(nom){
	/**
    * \fn PageMere(string nom)
    * \brief Constructeur d'une page mère
    *
    * \param nom 
    */
}

PageMere::~PageMere(){
	/**
    * \fn ~PageMere()
    * \brief Destructeur d'une page mère
    */
}

string PageMere::getNom() {
	/**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page
    *
    * \return nom
    */

    return nom;
}

void PageMere::afficherPage(){
    /**
    * \fn afficherPage()
    * \brief Affichage d'une page
    */

	cout<<getNom();
}

bool operator==(PageMere &p1, PageMere &p2){
    /**
    * \fn operator==(PageMere &p1,PageMere &p2)
    * \brief Comparaison entre deux pages
    *
    * \param p1 Première Page
    * \param p2 Deuxième Page
    * 
    * \return Un booléen vrai ou faux
    */

    return p1.getNom()==p2.getNom();
}
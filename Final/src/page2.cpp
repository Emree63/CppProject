#include "page2.hpp"
#include <iostream>
using namespace std;

Page2::Page2(string nom): PageMere(nom){
	/**
    * \fn Page2(string nom)
    * \brief Constructeur d'une page
    * 
    * \author Emre
    *
    * \param nom
    */
}

Page2::~Page2(){
	/**
    * \fn ~Page2()
    * \brief Destructeur d'une page
    * 
    * \author Emre
    */
}

// Fonction supplémentaires
list<PageMere*> Page2::getPageVoisine() const{}
void Page2::ajoutVoisine(std::list<PageMere*> voisine){}
void Page2::afficherVoisines(){}
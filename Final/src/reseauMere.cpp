#include "reseauMere.hpp"
using namespace std;

ReseauMere::ReseauMere(){
	/**
    * \fn ReseauMere()
    * \brief Constructeur d'un réseau
    * 
    * \author Noémie
    */
}

ReseauMere::~ReseauMere(){
	/**
    * \fn ~ReseauMere()
    * \brief Destructeur d'un réseau
    * 
    * \author Laurine
    */
}

map<PageMere*,bool> ReseauMere::accessible(PageMere* p){
    /**
    * \fn accessible(PageMere* p)
    * \brief Algorithme d'accessibilité depuis une page
    * 
    * \author Loris
    *
    * \param p
    * 
    * \return page_visite
    */

    Pile pile;
    PageMere* tmp;
    map<PageMere*,bool> page_visite;
    pile.empiler(p);
    while(!pile.estVide())
    {
        tmp=pile.depiler();
        if (page_visite.find(tmp) == page_visite.end())
            page_visite[tmp]=true;
        list<PageMere*> voisinTmp = Voisin(tmp);
        for(PageMere *voisin : voisinTmp)
            if(page_visite.find(voisin) == page_visite.end())
                pile.empiler(voisin);
    }
    return page_visite;
}

void ReseauMere::inserer(PageMere* p){
    /**
    * \fn inserer(PageMere* p)
    * \brief Inserer une page dans la liste des pages du Réseau
    * 
    * \author Emre
    *
    * \param p 
    */

    pages.insert(pages.end(), p);
}
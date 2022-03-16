#include <iostream>
#include <vector>
#include <string>
#include "page.hpp"

using namespace std;

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

void Page::ajoutVoisine(std::vector<Page*> voisine)
{
    /**
    * \fn ajoutVoisine(std::vector<Page*> voisine)
    * \brief Ajouter une voisine le tableau de Page.
    *
    * \param voisine Adresse de la page voisine.
    */
    pageVoisine=voisine;
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

void Page::afficherVoisines()
{
    /**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines du page.
    * 
    */
    cout<<nom<<" : {";
    for(int it=0; it<pageVoisine.size(); it++)
    {
        if(it!=pageVoisine.size()-1)
            cout<<*pageVoisine[it]<<" ,";
        else
            cout<<*pageVoisine[it];
    }

    cout<<" }"<<endl;
}


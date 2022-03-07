#include<iostream>
#include<string>
#include "Reseau.hpp"
#include <iterator>

using namespace std;

bool operator==(Page &p1,Page &p2)
{
    /**
    * \fn operator==(Page &p1,Page &p2)
    * \brief Comparaison entre deux pages
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    * 
    * \return Un booléen vrai ou faux
    */
   
    return p1.getNom()==p2.getNom();
}

Reseau::Reseau()
{
    
}

void Reseau::inserer(Page* p)
{
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */

    vecPages.insert(vecPages.end(), p);
}

ostream &operator<<(ostream &s, Reseau &r)
{
    /**
    * \fn operator<<(ostream &s,Reseau &r)
    * \brief Opérateur d'affichage du Réseau .
    *
    * \param s 
    * \param r Reseau.
    * 
    * \return s
    */

    s<<"Page :{";
    for(Page* p1 : r.vecPages)
    {
        s<<*p1<<",";
    }
    s<<" }"<<endl;
    s<<"Pages accesibles :"<<endl;

    for(Page* p2 : r.vecPages)
    {
        p2->afficherVoisines();
    }
    
    return s;
}



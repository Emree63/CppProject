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
{ } 

void Reseau::inserer(Page* p)
{
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */
    pages.insert(pages.end(), p);
}

void Reseau::insererHyperliens(Page* p1,Page* p2, int num)
{
    /**
    * \fn insererHyperliens(Page* p1,Page* p2)
    * \brief Inserer un hyperliens dans la matrice du Réseau.
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */

    if (num == 1)
        matrice[p1[p2]] = 1;
    else
        matrice[p1[p2]] = 0;   
}

ostream &operator<<(ostream &s, Reseau &r)
{
    /**
    * \fn operator<<(ostream &s,Reseau &r)
    * \brief Opérateur d'affichage de la matrice .
    *
    * \param s 
    * \param r Reseau.
    * 
    * \return s
    */

    for (int i=0; i<r.pages.size(); i++)
        s<<"(";
        for(int j=0; j<r.pages.size(); j++)
            s<<matrice[i[j]]<<" ";
        s<<")"<<endl;
    
    return s;
}

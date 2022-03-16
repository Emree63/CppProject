#include<iostream>
#include<string>
#include "Reseau.hpp"
#include <iterator>
#include "pile.hpp"

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

void Reseau::insererHyperliens(Page* p1,Page* p2)
{
    /**
    * \fn insererHyperliens(Page* p1,Page* p2)
    * \brief Inserer un hyperliens dans la liste hyperliens du Réseau.
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */
    typedef pair <Page*, Page*> p;
    hyperliens.insert ( p( p1, p2));
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
    int i = 0;
    s<<"Page : {";
    for(Page* p1 : r.pages)
    {
        s<<*p1<<" ";
    }
    s<<" }"<<endl;

    s<<"Hyperliens : {";
    for(pair<Page*, Page*> p2 : r.hyperliens)
    {
        if(i!=r.hyperliens.size()-1)
			s<<"("<<*(p2.first)<<","<<*(p2.second)<<"),";
		else
			s<<"("<<*(p2.first)<<","<<*(p2.second)<<")";
        i++;
    }
    s<<"}"<<endl;
    
    return s;
}

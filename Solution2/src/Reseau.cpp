#include<iostream>
#include<string>
#include "Reseau.hpp"
#include <iterator>
#include "pile.hpp"

using namespace std;

Reseau::Reseau(){
	/**
    * \fn Reseau()
    * \brief Constructeur d'un réseau.
    */
}

void Reseau::inserer(Page* p){
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */

    pages.insert(pages.end(), p);
}

void Reseau::insererHyperliens(Page* p1,Page* p2){
    /**
    * \fn insererHyperliens(Page* p1,Page* p2)
    * \brief Inserer un hyperliens dans la liste hyperliens du Réseau.
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */

    typedef pair <Page*, Page*> p;
    hyperliens.insert( p( p1, p2));
}

list<Page*> Reseau::Voisin(Page *p){
    /**
    * \fn Voisin(Page *p)
    * \brief Recupere tout les pages voisines d'une page.
    *
    * \param p Page.
    * 
    * \return Liste des pages voisines
    */
    list<Page*> Voisin;
    for(pair<Page*,Page*> it : hyperliens)
    {
        if(*p==*it.first)
            Voisin.push_back(it.second);
    }
    return Voisin;
}

map <Page*,bool> Reseau::accessible(Page* p){
    /**
    * \fn accessible(Page* p)
    * \brief Algorithme d'accessibilité depuis une page.
    *
    * \param p Page.
    * 
    * \return page_visite Map des pages accessible
    */
    Pile pile;
    Page* tmp;
    map <Page*,bool> page_visite;
    pile.empiler(p);
    while(!pile.estVide())
    {
        tmp=pile.depiler();
        if (page_visite.find(tmp) == page_visite.end())
            page_visite[tmp]=true;
        list<Page*> voisinTmp = Voisin(tmp);
        for(Page *voisin : voisinTmp)
            if(page_visite.find(voisin) == page_visite.end())
                pile.empiler(voisin);
    }
    return page_visite;
}

bool operator==(Page &p1,Page &p2){
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

ostream &operator<<(ostream &s, Reseau &r){
    /**
    * \fn operator<<(ostream &s,Reseau &r)
    * \brief Opérateur d'affichage du Réseau
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

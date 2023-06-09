#include<iostream>
#include<string>
#include "Reseau.hpp"
#include "pile.hpp"
#include <iterator>
#include <map>

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

    vecPages.insert(vecPages.end(), p);
}

list<Page*> Reseau::Voisin(Page *p){
    /**
    * \fn Voisin(Page *p)
    * \brief Renvoie les pages voisines d'une page. .
    *
    * \param p Page.
    * 
    * \return p->getPVoisine()
    */

    return p->getPVoisine();
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
        if(p1==r.vecPages.back())
            s<<*p1;
        else
            s<<*p1<<" ,";
    }
    s<<" }"<<endl;
    s<<"Pages accesibles :"<<endl;

    for(Page* p2 : r.vecPages)
    {
        p2->afficherVoisines();
    }
    
    return s;
}



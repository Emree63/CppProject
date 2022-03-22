#include<iostream>
#include<string>
#include "pile.hpp"
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

Reseau::Reseau(){} 

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

list<Page*> Reseau::Voisin(Page *p){
    /**
    * \fn Voisin(Page *p)
    * \brief Renvoie les pages voisines d'une page. .
    *
    * \param p Page.
    * 
    * \return p->getPageVoisine()
    */

    return p->getPageVoisine();
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
    s<<"Pages : {";
    int c=0;
    for (Page* p : r.pages){
        if(p!=r.pages.back())
            s<<p->getNom()<<"="<<c<<", ";
        else
            s<<p->getNom()<<"="<<c;
        c++;
    }
    s<<"}"<<endl<<endl;

    int i, j;
    s<<"\t";
    for(int k=0; k<r.matrice.size(); k++)
            s<<"|"<<k;
    s<<endl<<endl;
    for (i=0; i<r.matrice.size(); i++){
        s<<i<<"\t(";
        for(j=0; j<r.matrice[i].size(); j++)
            s<<r.matrice[i][j]<<" ";
        s<<")"<<endl;
    }
    
    return s;
}


vector<int> Reseau::remplirLigne(Page* p)
{
    vector<int> ligne;
    for (Page* p1: pages) 
        {
            if (trouverdanspagevoisine(p, p1)==true)
                {
                    ligne.push_back(1);
                }
            else ligne.push_back(0);
        }
    return ligne;

}

void Reseau::remplirMatrice() {
    for(Page* p: pages)
    {
        matrice.push_back(remplirLigne(p));
    }
}

bool Reseau::trouverdanspagevoisine(Page* p1, Page* p2){
    for(Page * p : p1->getPageVoisine())
    {
        if (p==p2)
            return true;
    }
    return false;
}
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

// void Reseau::insererHyperliens(Page* p1,Page* p2, int num)
// {
//     /**
//     * \fn insererHyperliens(Page* p1,Page* p2)
//     * \brief Inserer un hyperlien dans la matrice du Réseau.
//     *
//     * \param p1 Première Page.
//     * \param p2 Deuxième Page.
//     */

//     matrice[p1->Page::numero][p2->Page::numero] = num;
// }

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
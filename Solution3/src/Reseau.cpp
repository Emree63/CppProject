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

void Reseau::insererHyperliens(Page* p1,Page* p2, int num)
{
    /**
    * \fn insererHyperliens(Page* p1,Page* p2)
    * \brief Inserer un hyperlien dans la matrice du Réseau.
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */

    matrice[p1->Page::numero][p2->Page::numero] = num;
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
    int i, j;
    for (i=0; i<r.matrice.size(); i++)
        s<<"(";
        for(j=0; j<r.matrice[i].size(); j++)
            s<<r.matrice[i][j]<<" ";
        s<<")"<<endl;
    
    return s;
}


void Reseau::remplirTableau()
{
    vector<int> ligne;
    for (Page* p1: pages) 
        {
            if (p1->trouvepagedanstableau()==true)
                {
                    ligne[]=0; //insert 0 ou 1 dans tableau
                }
        }



}

vector<std::vector<int> matrice;

for(int i=0; i < pages.size(); i++){
    vector<int> v1;
}

for (int j=0; j< pages.size(); j++){
    v1.push_back()
}


bool Reseau::trouvepagedanstableau(Page* p1, Page* p2){
    for( auto it= p1.pageVoisine.begin(); it!= p1.pageVoisine.begin(); it++)
    {
        if (*it==p2)
            return true;
    }
    return false;
}
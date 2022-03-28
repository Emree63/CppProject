#include<iostream>
#include "reseau3.hpp"
#include <iterator>

using namespace std;

Reseau3::Reseau3(){

} 

Reseau3::~Reseau3(){
    for(PageMere* p : pages)
        delete p;
}

void Reseau3::inserer(PageMere* p)
{
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */
    pages.insert(pages.end(), p);
}

list<PageMere*> Reseau3::Voisin(PageMere *p){
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

void Reseau3::afficherReseau()
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
    cout<<"Pages : {";
    int c=0;
    for (PageMere* p : pages){
        if(p!=pages.back()){
            p->afficherPage();
            cout<<"="<<c<<", ";
        }
        else{
            p->afficherPage();
            cout<<"="<<c;
        }
        c++;
    }
    cout<<"}"<<endl<<endl;

    int i, j;
    cout<<"\t";
    for(int k=0; k<matrice.size(); k++)
        cout<<"|"<<k;
    cout<<endl<<endl;
    for (i=0; i<matrice.size(); i++){
        cout<<i<<"\t(";
        for(j=0; j<matrice[i].size(); j++)
            cout<<matrice[i][j]<<" ";
        cout<<")"<<endl;
    }
}


vector<int> Reseau3::remplirLigne(PageMere* p)
{
    vector<int> ligne;
    for (PageMere* p1: pages) 
        {
            if (trouverDansPageVoisine(p, p1)==true)
                {
                    ligne.push_back(1);
                }
            else ligne.push_back(0);
        }
    return ligne;

}

void Reseau3::remplirMatrice() {
    for(PageMere* p: pages)
    {
        matrice.push_back(remplirLigne(p));
    }
}

bool Reseau3::trouverDansPageVoisine(PageMere* p1, PageMere* p2){
    for(PageMere* p : p1->getPageVoisine())
    {
        if (p==p2)
            return true;
    }
    return false;
}

void Reseau3::insererHyperliens(PageMere *p1,PageMere *p2){

}
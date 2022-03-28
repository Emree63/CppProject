#include<iostream>
#include "reseau3.hpp"
#include <iterator>

using namespace std;

Reseau3::Reseau3(){
	/**
    * \fn Reseau3()
    * \brief Constructeur d'un réseau
    */
} 

Reseau3::~Reseau3(){
	/**
    * \fn ~Reseau1()
    * \brief Destructeur d'un réseau
    */

    for(PageMere* p : pages)
        delete p;
}

void Reseau3::inserer(PageMere* p){
    /**
    * \fn inserer(PageMere* p)
    * \brief Inserer une page dans la liste des pages du Réseau
    *
    * \param p 
    */

    pages.insert(pages.end(), p);
}

list<PageMere*> Reseau3::Voisin(PageMere *p){
    /**
    * \fn Voisin(PageMere *p)
    * \brief Renvoie les pages voisines d'une page
    *
    * \param p
    * 
    * \return p->getPageVoisine()
    */

    return p->getPageVoisine();
}

void Reseau3::afficherReseau(){
    /**
    * \fn afficherReseau()
    * \brief Affichage du Réseau
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


vector<int> Reseau3::remplirLigne(PageMere* p){
    /**
    * \fn remplirLigne(PageMere* p)
    * \brief Rempli une ligne de la matrice
    *
    * \param p
    * 
    * \return ligne
    */

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

void Reseau3::remplirMatrice(){
    /**
    * \fn remplirMatrice()
    * \brief Rempli toute la matrice à l'aide de ligne
    */    
    for(PageMere* p: pages)
    {
        matrice.push_back(remplirLigne(p));
    }
}

bool Reseau3::trouverDansPageVoisine(PageMere* p1, PageMere* p2){
    /**
    * \fn trouverDansPageVoisine(PageMere* p1, PageMere* p2)
    * \brief Cherche si p2 est dans les pages voisines de p1
    *
    * \param p1 Première page
    * \param p2 Deuxième page
    * 
    * \return Un booléen Vrai ou Faux
    */
    for(PageMere* p : p1->getPageVoisine())
    {
        if (p==p2)
            return true;
    }
    return false;
}

// Fonction supplémentaires
void Reseau3::insererHyperliens(PageMere *p1,PageMere *p2){}
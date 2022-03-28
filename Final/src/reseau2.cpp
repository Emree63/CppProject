#include<iostream>
#include "reseau2.hpp"
#include <iterator>
using namespace std;

Reseau2::Reseau2(){
	/**
    * \fn Reseau()
    * \brief Constructeur d'un réseau.
    */
}

Reseau2::~Reseau2(){
    for(PageMere* p : pages)
        delete p;
}

void Reseau2::inserer(PageMere* p){
    /**
    * \fn inserer(Page* p)
    * \brief Inserer une Page dans la liste du Réseau.
    *
    * \param p Page.
    */

    pages.insert(pages.end(), p);
}

void Reseau2::insererHyperliens(PageMere* p1,PageMere* p2){
    /**
    * \fn insererHyperliens(Page* p1,Page* p2)
    * \brief Inserer un hyperliens dans la liste hyperliens du Réseau.
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */

    typedef pair <PageMere*, PageMere*> p;
    hyperliens.insert( p( p1, p2));
}

list<PageMere*> Reseau2::Voisin(PageMere *p){
    /**
    * \fn Voisin(Page *p)
    * \brief Recupere tout les pages voisines d'une page.
    *
    * \param p Page.
    * 
    * \return Liste des pages voisines
    */
    list<PageMere*> Voisin;
    for(pair<PageMere*, PageMere*> it : hyperliens)
    {
        if(*p==*it.first)
            Voisin.push_back(it.second);
    }
    return Voisin;
}

void Reseau2::afficherReseau(){
    /**
    * \fn operator<<(ostream &s,Reseau &r)
    * \brief Opérateur d'affichage du Réseau
    *
    * \param r Reseau.
    */

    int i = 0;
    cout<<"Page : {";
    for(PageMere* p1 : pages)
    {
        p1->afficherPage();
        cout<<" ";
    }
    cout<<" }"<<endl;
    cout<<"Hyperliens : {";
    for(pair<PageMere*, PageMere*> p2 : hyperliens)
    {
        if(i!=hyperliens.size()-1){
			cout<<"(";
            p2.first->afficherPage();
            cout<<",";
            p2.second->afficherPage();
            cout<<"),";
        }
		else{
			cout<<"(";
            p2.first->afficherPage();
            cout<<",";
            p2.second->afficherPage();
            cout<<")";
        }
        i++;
    }
    cout<<"}"<<endl;
}
        
vector<int> Reseau2::remplirLigne(PageMere *p){

}

void Reseau2::remplirMatrice(){

}

bool Reseau2::trouverDansPageVoisine(PageMere *p1, PageMere *p2){

}

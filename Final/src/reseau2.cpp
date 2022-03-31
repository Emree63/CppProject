#include "reseau2.hpp"
#include<iostream>
using namespace std;

Reseau2::Reseau2(){
	/**
    * \fn Reseau2()
    * \brief Constructeur d'un réseau
    * 
    * \author Emre
    */
}

Reseau2::~Reseau2(){
	/**
    * \fn ~Reseau2()
    * \brief Destructeur d'un réseau
    * 
    * \author Emre
    */

    for(PageMere* p : pages)
        delete p;
}

void Reseau2::insererHyperliens(PageMere* p1,PageMere* p2){
    /**
    * \fn insererHyperliens(PageMere* p1,PageMere* p2)
    * \brief Inserer un hyperliens dans la liste hyperliens du Réseau
    * 
    * \author Emre
    *
    * \param p1 Première Page.
    * \param p2 Deuxième Page.
    */

    typedef pair <PageMere*, PageMere*> p;
    hyperliens.insert(p( p1, p2));
}

list<PageMere*> Reseau2::Voisin(PageMere *p){
    /**
    * \fn Voisin(PageMere *p)
    * \brief Recupere tout les pages voisines d'une page
    * 
    * \author Loris
    *
    * \param p
    * 
    * \return Liste des pages voisines
    */

    list<PageMere*> voisin;
    for(pair<PageMere*, PageMere*> page : hyperliens)
    {
        if(*p==*(page.first))
            voisin.push_back(page.second);
    }
    return voisin;
}

void Reseau2::afficherReseau() const{
     /**
    * \fn afficherReseau()
    * \brief Affichage du Réseau
    * 
    * \author Emre
    */

    unsigned i = 0;
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

// Fonction supplémentaires     
vector<int> Reseau2::remplirLigne(PageMere *p){}
void Reseau2::remplirMatrice(){}
bool Reseau2::trouverDansPageVoisine(PageMere *p1, PageMere *p2){}

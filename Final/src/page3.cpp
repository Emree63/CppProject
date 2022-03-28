#include <iostream>
#include "page3.hpp"

using namespace std;

Page3::Page3(string nom): PageMere(nom){}

Page3::~Page3(){}

string Page3::getNom()
{
    /**
    * \fn getNom()
    * \brief Getter qui renvoie le nom de la page.
    *
    * \return nom
    */
    return nom;
}

list<PageMere*> Page3::getPageVoisine()
{ 
    return pageVoisine;
}


void Page3::ajoutVoisine(std::list<PageMere*> voisine)
{
    /**
    * \fn ajoutVoisine(std::vector<Page*> voisine)
    * \brief Ajouter une voisine le tableau de Page.
    *
    * \param voisine Adresse de la page voisine.
    */
    pageVoisine=voisine;
}
 
void Page3::afficherPage()
{
    /**
    * \fn operator <<(ostream &s, Page &p)
    * \brief Operateur d'affichage de nom d'une page
    *
    * \param p Page
    * 
    * \return s
    */
    cout<<getNom();
}

void Page3::afficherVoisines()
{
    /**
    * \fn afficherVoisines()
    * \brief Affiche toutes les voisines du page.
    * 
    */
    cout<<nom<<" : {";
    for(PageMere* p : pageVoisine)
    {
        if(p!=pageVoisine.back()){
            p->afficherPage();
            cout<<" ,";
        }
        else
            p->afficherPage();
    }

    cout<<" }"<<endl;
}
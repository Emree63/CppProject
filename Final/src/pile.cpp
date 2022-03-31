#include "pile.hpp"
#include<string>
#include<iostream>

 
void Pile::empiler(PageMere* page){
    /**
    * \fn empiler (PageMere* page)
    * \brief Empile une page dans une pile
    * 
    * \author Loris
    *
    * \param page Adresse de la page à empiler
    */

    liste.insert(liste.end(), page);
}

PageMere* Pile::depiler(){
    /**
    * \fn depiler()
    * \brief Dépile une page dans une pile et renvoie la page dépiler
    * 
    * \author Loris
    *
    * \return page
    */

    PageMere* page = liste.back();
    liste.pop_back();
    return page;
}

bool Pile::estVide(){
    /**
    * \fn estVide()
    * \brief Teste si la pile est vide
    * 
    * \author Loris
    *
    * \return Un booléen vrai ou faux
    */

    if(liste.size()==0)
        return true;
    return false;
}
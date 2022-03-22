#include "pile.hpp"
#include<string>
#include<iostream>

#include "page.hpp"
 
void Pile::empiler(Page* page){
    /**
    * \fn empiler (Page* page)
    * \brief Empile une page dans une pile.
    *
    * \param page Adresse de la page à empiler.
    */

    liste.insert(liste.end(), page);
}

Page* Pile::depiler(){
    /**
    * \fn depiler ()
    * \brief Dépile une page dans une pile et renvoie la page dépiler.
    *
    * \return page
    */

    Page* page = liste.back();
    liste.pop_back();
    return page;
}

bool Pile::estVide(){
    /**
    * \fn estVide()
    * \brief Teste si la pile est vide.
    *
    * \return true ou false
    */

    if(liste.size()==0)
        return true;
    return false;
}
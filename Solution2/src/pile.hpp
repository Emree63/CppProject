#ifndef PILE_HPP
#define PILE_HPP

#include <list>
#include "page.hpp"
 
// Définition de la classe Pile
 
class Pile
{
    private:
        std::list<Page*> liste;
    public:
        void empiler (Page* page);
        Page* depiler();
        bool estVide();
};
#endif
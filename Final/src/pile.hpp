#ifndef PILE_HPP
#define PILE_HPP

#include <list>
#include "pageMere.hpp"
 
// Définition de la classe Pile
class Pile
{
    private:
        std::list<PageMere*> liste;
    public:
        void empiler (PageMere* page);
        PageMere* depiler();
        bool estVide();
};
#endif
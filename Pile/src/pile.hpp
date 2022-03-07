#ifndef PILE_HPP
#define PILE_HPP

#include <list>
 
// Définition de la classe Pile
 
class Pile
{
    private:
        list <Page*> liste;
    public:
        void empiler (Page* page);
        void depiler ();
};
#endif
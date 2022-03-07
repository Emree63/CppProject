#include "pile.hpp"
#include<string>
#include<iostream>

#include "page.hpp"
 
void Pile::empiler (Page* page)
{
    liste.insert(liste.end(), page);
}

std::list<Page*>::iterator Pile::depiler ()
{
    std::list<Page*>::iterator it;
    it = liste.erase(liste.end());
    return it;
}

bool Pile::estVide(){
    if(liste.size()==0)
        return true;
    return false;
}
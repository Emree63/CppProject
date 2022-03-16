#include "pile.hpp"
#include<string>
#include<iostream>

#include "page.hpp"
 
void Pile::empiler (Page* page)
{
    liste.insert(liste.end(), page);
}

Page* Pile::depiler ()
{
    Page* p = liste.back();
    liste.pop_back();
    return p;
}

bool Pile::estVide(){
    if(liste.size()==0)
        return true;
    return false;
}
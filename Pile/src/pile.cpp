#include "pile.hpp"
#include<string>
#include<iostream>
 
void Pile::empiler (Page* page)
{
    liste.insert(liste.end(), page);
}

void Pile::depiler (){
    liste.erase(liste.end());
}
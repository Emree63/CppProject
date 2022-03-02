#include<iostream>
#include<string>
#include "Reseau.hpp"
#include <iterator>

using namespace std;

bool operator==(Page &p1,Page &p2)
{
    return p1.getNom()==p2.getNom();
}

Reseau::Reseau()
{
    
}

void Reseau::inserer(Page* p)
{
    vecPages.insert(vecPages.end(), p);
}

ostream &operator<<(ostream &s, Reseau &r)
{
    s<<"Page :(";
    for(Page* p1 : r.vecPages)
    {
        s<<*p1<<" ";
    }
    s<<" )"<<endl<<"Pages accesibles :"<<endl;

    for(Page* p2 : r.vecPages)
    {
        p2->afficherVoisines();
    }
    
    return s;
}

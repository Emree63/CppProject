#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include"page.hpp"

class Page;

class Reseau {
    std::vector<Page*> pages;
    std::vector<std::vector <Page*> > matrice;
    public:
        Reseau();
        void inserer(Page* p);
        bool hyperlienDirect(Page* p)
        friend bool operator==(Page &p1,Page &p2);
        friend std::ostream &operator<<(std::ostream &s, Reseau &r);
        void remplirMatrice();
};

#endif



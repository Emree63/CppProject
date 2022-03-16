#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include <map>
#include"page.hpp"

class Page;

class Reseau {
    std::vector<Page*> vecPages;
    public:
        Reseau();
        std::list<Page*> Voisin(Page *p);
        void inserer(Page* p);
        std::map <Page*,bool> accessible(Page* p);
        friend bool operator==(Page &p1,Page &p2);
        friend std::ostream &operator<<(std::ostream &s, Reseau &r);
};

#endif
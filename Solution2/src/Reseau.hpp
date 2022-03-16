#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include<map>
#include<list>
#include"page.hpp"

class Page;

class Reseau {
    std::vector<Page*> pages;
    std::multimap<Page*, Page*> hyperliens;
    public:
        Reseau();
        std::list<Page*> Voisin(Page *p);
        void inserer(Page* p);
        std::map <Page*,bool> accessible(Page* p);
        friend bool operator==(Page &p1,Page &p2);
        friend std::ostream &operator<<(std::ostream &s, Reseau &r);
        void insererHyperliens(Page* p1,Page *p2);
};

#endif
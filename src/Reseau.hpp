#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include"page.hpp"

class Page;

class Reseau {
    std::vector<Page*> vecPages;
    public:
        Reseau();
        void inserer(Page* p);
        friend bool operator==(Page &p1,Page &p2);
         
};

#endif
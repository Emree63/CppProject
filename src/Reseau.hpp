#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include"page.hpp"

class Page;

class Reseau {
    std::vector<Page*> vecPages;
    public:
        void inserer(Page* p);
         
};

#endif
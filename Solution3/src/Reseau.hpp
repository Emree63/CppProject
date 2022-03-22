#ifndef RESEAU_HPP
#define RESEAU_HPP
#include<string>
#include<vector>
#include"page.hpp"

class Page;

// Definition de la classe Reseau
class Reseau {
    std::vector<Page*> pages;
    std::vector<std::vector <int> > matrice;
    public:
        Reseau();
        void inserer(Page* p);
        std::map <Page*,bool> accessible(Page* p);m);
        friend bool operator==(Page &p1,Page &p2);
        friend std::ostream &operator<<(std::ostream &s, Reseau &r);
        std::vector<int> remplirLigne(Page* p);
        void remplirMatrice();
        bool trouverdanspagevoisine(Page* p1, Page* p2);
}; 

#endif


 
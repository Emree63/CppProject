#ifndef RESEAUMERE_HPP
#define RESEAUMERE_HPP
#include <string>
#include <vector>
#include <map>
#include <list>
#include "pageMere.hpp"
#include "pile.hpp"

class PageMere;

// Definition de la classe Reseau Mère
class ReseauMere{
    public:
        std::vector<PageMere*> pages;
        ReseauMere();
        virtual ~ReseauMere();
        virtual std::list<PageMere*> Voisin(PageMere *p) = 0;
        void inserer(PageMere* p);
        std::map<PageMere*,bool> accessible(PageMere* p);
        virtual void afficherReseau() = 0;
        virtual void insererHyperliens(PageMere *p1,PageMere *p2) = 0;
        virtual std::vector<int> remplirLigne(PageMere *p) = 0;
        virtual void remplirMatrice() = 0;
        virtual bool trouverDansPageVoisine(PageMere *p1, PageMere *p2) = 0;
};

#endif
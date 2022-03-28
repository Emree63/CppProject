#ifndef RESEAU2_HPP
#define RESEAU2_HPP
#include "reseauMere.hpp"
#include "page2.hpp"

class Reseau2 : public ReseauMere{
    std::multimap<PageMere*, PageMere*> hyperliens;
    public:
        Reseau2();
        ~Reseau2();
        std::list<PageMere*> Voisin(PageMere *p) override;
        void inserer(PageMere *p) override;
        void insererHyperliens(PageMere *p1,PageMere *p2);
        void afficherReseau() override;
        std::vector<int> remplirLigne(PageMere *p);
        void remplirMatrice();
        bool trouverDansPageVoisine(PageMere *p1, PageMere *p2);
};

#endif
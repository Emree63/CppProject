#ifndef RESEAU1_HPP
#define RESEAU1_HPP
#include "reseauMere.hpp"
#include "page1.hpp"

class Reseau1 : public ReseauMere{
    public:
        Reseau1();
        ~Reseau1();
        std::list<PageMere*> Voisin(PageMere *p) override;
        void inserer(PageMere* p) override;
        void afficherReseau() override;
        void insererHyperliens(PageMere *p1,PageMere *p2);
        std::vector<int> remplirLigne(PageMere *p);
        void remplirMatrice();
        bool trouverDansPageVoisine(PageMere *p1, PageMere *p2);
};

#endif
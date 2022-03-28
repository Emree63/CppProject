#ifndef RESEAU3_HPP
#define RESEAU3_HPP
#include "reseauMere.hpp"

// Definition de la classe Reseau Solution 3
class Reseau3 : public ReseauMere{
    std::vector<std::vector <int>> matrice;
    public:
        Reseau3();
        ~Reseau3();
        std::list<PageMere*> Voisin(PageMere *p) override;
        std::vector<int> remplirLigne(PageMere *p);
        void remplirMatrice();
        bool trouverDansPageVoisine(PageMere *p1, PageMere *p2);
        void afficherReseau() override;
        void insererHyperliens(PageMere *p1,PageMere *p2);
};

#endif
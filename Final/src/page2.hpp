#ifndef PAGE2_HPP
#define PAGE2_HPP
#include "pageMere.hpp"
class Page2 : public PageMere{
    public:
        Page2(std::string nom);
        ~Page2();
        std::string getNom() override;
        void afficherPage() override;
        std::list<PageMere*> getPageVoisine() override;
        void ajoutVoisine(std::list<PageMere*> voisine);
        void afficherVoisines();
};

#endif
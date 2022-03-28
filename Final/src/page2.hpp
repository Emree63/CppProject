#ifndef PAGE2_HPP
#define PAGE2_HPP
#include "pageMere.hpp"

// Definition de la classe Page Solution 2
class Page2 : public PageMere{
    public:
        Page2(std::string nom);
        ~Page2();
        std::list<PageMere*> getPageVoisine() const override;
        void ajoutVoisine(std::list<PageMere*> voisine);
        void afficherVoisines();
};

#endif
#ifndef PAGE3_HPP
#define PAGE3_HPP
#include "pageMere.hpp"

// Definition de la classe Page Solution 3
class Page3 : public PageMere{
    std::list<PageMere*> pageVoisine;
    public:
        Page3(std::string nom);
        ~Page3();
        void ajoutVoisine(std::list<PageMere*> voisine) override;
        void afficherVoisines() override;
        std::list<PageMere*> getPageVoisine() const override;
}; 

#endif
#ifndef PAGE3_HPP
#define PAGE3_HPP
#include "pageMere.hpp"
#include "page1.hpp"

class Page3 : public PageMere{
    std::list<PageMere*> pageVoisine;
    public:
        Page3(std::string nom);
        ~Page3();
        std::string getNom() override;
        void ajoutVoisine(std::list<PageMere*> voisine) override;
        void afficherVoisines() override;
        std::list<PageMere*> getPageVoisine() override;
        void afficherPage() override;
}; 

#endif
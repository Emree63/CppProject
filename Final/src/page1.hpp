#ifndef PAGE1_HPP
#define PAGE1_HPP
#include "pageMere.hpp"

// Definition de la classe Page Solution 1
class Page1 : public PageMere{
	std::list<PageMere*> pageVoisine;
    public:
        Page1(std::string nom);
        ~Page1();
        std::list<PageMere*> getPageVoisine() override;
        std::string getNom() override;
        void afficherPage() override;
        void ajoutVoisine(std::list<PageMere*> voisine);
        void afficherVoisines();
};

#endif
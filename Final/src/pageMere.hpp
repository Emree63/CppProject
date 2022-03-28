#ifndef PAGEMERE_HPP
#define PAGEMERE_HPP
#include <string>
#include <list>

class PageMere{
    public:
        std::string nom;
        PageMere(std::string nom);
	    ~PageMere();
        virtual std::string getNom();
        virtual std::list<PageMere*> getPageVoisine();
        virtual void afficherPage() = 0;
        virtual void afficherVoisines();
        virtual void ajoutVoisine(std::list<PageMere*> voisine);
        friend bool operator==(PageMere &p1, PageMere &p2);
};

#endif








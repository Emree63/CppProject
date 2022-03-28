#ifndef PAGEMERE_HPP
#define PAGEMERE_HPP
#include <string>
#include <list>

// Definition de la classe Page Mère
class PageMere{
    public:
        std::string nom;
        PageMere(std::string nom);
	    ~PageMere();
        virtual std::string getNom();
        virtual std::list<PageMere*> getPageVoisine() const=0;
        virtual void afficherPage();
        virtual void afficherVoisines() =0;
        virtual void ajoutVoisine(std::list<PageMere*> voisine) =0;
        friend bool operator==(PageMere &p1, PageMere &p2);
};

#endif








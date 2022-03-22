#ifndef PAGE_HPP
#define PAGE_HPP
#include <string>
#include <vector>
#include <list>

class Page{
	std::string nom;
	std::list<Page*> pageVoisine;
public:
	Page(std::string nom);
	~Page();
	std::string getNom();
	void ajoutVoisine(std::list<Page*> voisine);
	void afficherChemin(std::list <Page*> chemin);
	void afficherVoisines();
	std::list<Page*> getPageVoisine() const;
	friend std::ostream & operator <<(std::ostream &s, Page &p);
}; 
#endif
#ifndef PAGE_HPP
#define PAGE_HPP
#include <string>
#include <vector>
#include <list>

class Page{
	std::string nom;
	std::vector<Page*> pageVoisine;
public:
	Page(std::string nom);
	~Page();
	std::string getNom();
	void ajoutVoisine(std::vector<Page*> voisine);
	std::list<Page*> chemin(Page* p);
	void afficherChemin(std::list <Page*> chemin);
	void afficherVoisines();
	friend std::ostream & operator <<(std::ostream &s, Page &p);
	friend bool operator==(Page &p1,Page &p2);
};
#endif
#ifndef PAGE_HPP
#define PAGE_HPP
#include <string>
#include <list>

class Page{
	std::string nom;
	std::list<Page*> pageVoisine;
public:
	Page(std::string nom);
	~Page();
	std::list<Page*> getPVoisine();
	std::string getNom();
	void ajoutVoisine(std::list<Page*> voisine);
	void afficherVoisines();
	friend std::ostream & operator <<(std::ostream &s, Page &p);
	friend bool operator==(Page &p1,Page &p2);
};
#endif
#ifndef PAGE_HPP
#define PAGE_HPP
#include <string>
#include <map>
#include <list>

// Definition de la classe Page
class Page{
	std::string nom;
public:
	Page(std::string nom);
	~Page();
	std::string getNom();
	void afficherChemin(std::list <Page*> chemin);
	friend std::ostream & operator <<(std::ostream &s, Page &p);
};
#endif
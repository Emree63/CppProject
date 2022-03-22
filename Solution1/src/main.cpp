#include <iostream>
#include <string>
#include "page.hpp"
#include "Reseau.hpp"

using namespace std;

int main()
{
	// Construction des pages
	Page p1("recettes.html");
	Page p2("ustencils.html");
	Page p3("ingredients.html");
	Page p4("tartePomme.html");
	Page p5("plat.html");
	Page p6("pomme.html");
	Page p7("compote.html");
	Page p8("économe.html");
	Page p9("pateFeuilleté.html");
	Page p10("tarteThon.html");
	Page p11("thon.html");
	Page p12("foie.html");
	Page p13("réglisse.html");
	
	// Ajout des pages Voisine
	std::list<Page*> pageVoisine1{&p2, &p3, &p4, &p7, &p10};
	p1.ajoutVoisine(pageVoisine1);

	std::list<Page*> pageVoisine2{&p3, &p5, &p8};
	p2.ajoutVoisine(pageVoisine2);

	std::list<Page*> pageVoisine3{&p1, &p6, &p9, &p11, &p12, &p13};
	p3.ajoutVoisine(pageVoisine3);
	
	std::list<Page*> pageVoisine4{&p1, &p5, &p6, &p8, &p9};
	p4.ajoutVoisine(pageVoisine4);

	std::list<Page*> pageVoisine5{&p2};
	p5.ajoutVoisine(pageVoisine5);

	std::list<Page*> pageVoisine6{&p4, &p7};
	p6.ajoutVoisine(pageVoisine6);
	
	std::list<Page*> pageVoisine7{&p6, &p8};
	p7.ajoutVoisine(pageVoisine7);

	std::list<Page*> pageVoisine8{&p2};
	p8.ajoutVoisine(pageVoisine8);

	std::list<Page*> pageVoisine9{&p4, &p10};
	p9.ajoutVoisine(pageVoisine9);

	std::list<Page*> pageVoisine10{&p1, &p5, &p9, &p11};
	p10.ajoutVoisine(pageVoisine10);

	std::list<Page*> pageVoisine11{&p10};
	p11.ajoutVoisine(pageVoisine11);

	std::list<Page*> pageVoisine12{};
	p12.ajoutVoisine(pageVoisine12);
	
	std::list<Page*> pageVoisine13{};
	p13.ajoutVoisine(pageVoisine13);

	// Insertion des pages dans le réseau
	Reseau r1;
	r1.inserer(&p1);
	r1.inserer(&p2);
	r1.inserer(&p3);
	r1.inserer(&p4);
	r1.inserer(&p5);
	r1.inserer(&p6);
	r1.inserer(&p7);
	r1.inserer(&p8);
	r1.inserer(&p9);
	r1.inserer(&p10);
	r1.inserer(&p11);
	r1.inserer(&p12);
	r1.inserer(&p13);

	// Affichage du réseau
	cout<<r1<<endl;

	// Affichage des pages accessible à partir d'une page
	map <Page*,bool> Accessible;
	Accessible = r1.accessible(&p13);
	for(pair<Page*,bool> p : Accessible)
	{
		cout<<*(p.first)<<" ";
	}
	cout<<endl;
	return 0;
}

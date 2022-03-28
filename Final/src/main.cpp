#include <iostream>
#include <string>
#include "pageMere.hpp"
#include "reseauMere.hpp"
#include "page1.hpp"
#include "reseau1.hpp"
#include "page2.hpp"
#include "reseau2.hpp"
#include "page3.hpp"
#include "reseau3.hpp"

using namespace std;

void Solution1(){
	// Construction des pages
	PageMere *p1 = new Page1("recettes.html");
	PageMere *p2 = new Page1("ustencils.html");
	PageMere *p3 = new Page1("ingredients.html");
	PageMere *p4 = new Page1("tartePomme.html");
	PageMere *p5 = new Page1("plat.html");;
	PageMere *p6 = new Page1("pomme.html");
	PageMere *p7 = new Page1("compote.html");
	PageMere *p8 = new Page1("économe.html");
	PageMere *p9 = new Page1("pateFeuilleté.html");
	PageMere *p10 = new Page1("tarteThon.html");
	PageMere *p11 = new Page1("thon.html");
	PageMere *p12 = new Page1("foie.html");
	PageMere *p13 = new Page1("réglisse.html");
	
	// Ajout des pages voisines
	std::list<PageMere*> pageVoisine1{p2, p3, p4, p7, p10};
	p1->ajoutVoisine(pageVoisine1);

	std::list<PageMere*> pageVoisine2{p3, p5, p8};
	p2->ajoutVoisine(pageVoisine2);

	std::list<PageMere*> pageVoisine3{p1, p6, p9, p11, p12, p13};
	p3->ajoutVoisine(pageVoisine3);
	
	std::list<PageMere*> pageVoisine4{p1, p5, p6, p8, p9};
	p4->ajoutVoisine(pageVoisine4);

	std::list<PageMere*> pageVoisine5{p2};
	p5->ajoutVoisine(pageVoisine5);

	std::list<PageMere*> pageVoisine6{p4, p7};
	p6->ajoutVoisine(pageVoisine6);
	
	std::list<PageMere*> pageVoisine7{p6, p8};
	p7->ajoutVoisine(pageVoisine7);

	std::list<PageMere*> pageVoisine8{p2};
	p8->ajoutVoisine(pageVoisine8);

	std::list<PageMere*> pageVoisine9{p4, p10};
	p9->ajoutVoisine(pageVoisine9);

	std::list<PageMere*> pageVoisine10{p1, p5, p9, p11};
	p10->ajoutVoisine(pageVoisine10);

	std::list<PageMere*> pageVoisine11{p10};
	p11->ajoutVoisine(pageVoisine11);

	std::list<PageMere*> pageVoisine12{};
	p12->ajoutVoisine(pageVoisine12);
	
	std::list<PageMere*> pageVoisine13{};
	p13->ajoutVoisine(pageVoisine13);

	// Insertion des pages dans le réseau
	ReseauMere *r1 = new Reseau1();
	r1->inserer(p1);
	r1->inserer(p2);
	r1->inserer(p3);
	r1->inserer(p4);
	r1->inserer(p5);
	r1->inserer(p6);
	r1->inserer(p7);
	r1->inserer(p8);
	r1->inserer(p9);
	r1->inserer(p10);
	r1->inserer(p11);
	r1->inserer(p12);
	r1->inserer(p13);

	// Affichage du réseau
	cout<<"Affichage du réseau :"<<endl;
	r1->afficherReseau();
	cout<<endl<<"--------------------------------------"<<endl;

	// Affichage des pages accessible à partir d'une page
	map <PageMere*,bool> Accessible;
	Accessible = r1->accessible(p11);
	cout<<"Pages accessible depuis "<<p11->getNom()<<" : ";
	for(pair<PageMere*,bool> p : Accessible)
	{
		p.first->afficherPage();
		cout<<" ";
	}
	cout<<endl<<"--------------------------------------"<<endl;
}

void Solution2(){
	// Construction des pages
	PageMere *p1 = new Page2("recettes.html");
	PageMere *p2 = new Page2("ustencils.html");
	PageMere *p3 = new Page2("ingredients.html");
	PageMere *p4 = new Page2("tartePomme.html");
	PageMere *p5 = new Page2("plat.html");;
	PageMere *p6 = new Page2("pomme.html");
	PageMere *p7 = new Page2("compote.html");
	PageMere *p8 = new Page2("économe.html");
	PageMere *p9 = new Page2("pateFeuilleté.html");
	PageMere *p10 = new Page2("tarteThon.html");
	PageMere *p11 = new Page2("thon.html");
	PageMere *p12 = new Page2("foie.html");
	PageMere *p13 = new Page2("réglisse.html");

	// Insertion des pages dans le réseau
	ReseauMere *r2 = new Reseau2();
	r2->inserer(p1);
	r2->inserer(p2);
	r2->inserer(p3);
	r2->inserer(p4);
	r2->inserer(p5);
	r2->inserer(p6);
	r2->inserer(p7);
	r2->inserer(p8);
	r2->inserer(p9);
	r2->inserer(p10);
	r2->inserer(p11);
	r2->inserer(p12);
	r2->inserer(p13);

	// Insertion des hyperliens 
	r2->insererHyperliens(p1,p2);
	r2->insererHyperliens(p1,p3);
	r2->insererHyperliens(p1,p4);
	r2->insererHyperliens(p1,p7);
	r2->insererHyperliens(p1,p10);

	r2->insererHyperliens(p2,p3);
	r2->insererHyperliens(p2,p5);
	r2->insererHyperliens(p2,p8);

	r2->insererHyperliens(p3,p1);
	r2->insererHyperliens(p3,p6);
	r2->insererHyperliens(p3,p9);
	r2->insererHyperliens(p3,p11);
	r2->insererHyperliens(p3,p12);
	r2->insererHyperliens(p3,p13);

	r2->insererHyperliens(p4,p1);
	r2->insererHyperliens(p4,p5);
	r2->insererHyperliens(p4,p6);
	r2->insererHyperliens(p4,p8);
	r2->insererHyperliens(p4,p9);

	r2->insererHyperliens(p5,p2);

	r2->insererHyperliens(p6,p4);
	r2->insererHyperliens(p6,p7);

	r2->insererHyperliens(p7,p6);
	r2->insererHyperliens(p7,p8);

	r2->insererHyperliens(p8,p2);

	r2->insererHyperliens(p9,p4);
	r2->insererHyperliens(p9,p10);

	r2->insererHyperliens(p10,p1);
	r2->insererHyperliens(p10,p5);
	r2->insererHyperliens(p10,p9);
	r2->insererHyperliens(p10,p11);

	r2->insererHyperliens(p11,p10);

	// Affichage du réseau
	cout<<"Affichage du réseau :"<<endl;
	r2->afficherReseau();
	cout<<endl<<"--------------------------------------"<<endl;

	// Affichage des pages accessible à partir d'une page
	map <PageMere*,bool> Accessible;
	Accessible = r2->accessible(p11);
	cout<<"Pages accessible depuis "<<p11->getNom()<<" : ";
	for(pair<PageMere*,bool> p : Accessible)
	{
		p.first->afficherPage();
		cout<<" ";
	}
	cout<<endl<<"--------------------------------------"<<endl;
}

void Solution3(){
	// Construction des pages
	PageMere *p1 = new Page3("recettes.html");
	PageMere *p2 = new Page3("ustencils.html");
	PageMere *p3 = new Page3("ingredients.html");
	PageMere *p4 = new Page3("tartePomme.html");
	PageMere *p5 = new Page3("plat.html");;
	PageMere *p6 = new Page3("pomme.html");
	PageMere *p7 = new Page3("compote.html");
	PageMere *p8 = new Page3("économe.html");
	PageMere *p9 = new Page3("pateFeuilleté.html");
	PageMere *p10 = new Page3("tarteThon.html");
	PageMere *p11 = new Page3("thon.html");
	PageMere *p12 = new Page3("foie.html");
	PageMere *p13 = new Page3("réglisse.html");

	// Ajout des pages voisines
	std::list<PageMere*> pageVoisine1{p2, p3, p4, p7, p10};
	p1->ajoutVoisine(pageVoisine1);

	std::list<PageMere*> pageVoisine2{p3, p5, p8};
	p2->ajoutVoisine(pageVoisine2);

	std::list<PageMere*> pageVoisine3{p1, p6, p9, p11, p12, p13};
	p3->ajoutVoisine(pageVoisine3);
	
	std::list<PageMere*> pageVoisine4{p1, p5, p6, p8, p9};
	p4->ajoutVoisine(pageVoisine4);

	std::list<PageMere*> pageVoisine5{p2};
	p5->ajoutVoisine(pageVoisine5);

	std::list<PageMere*> pageVoisine6{p4, p7};
	p6->ajoutVoisine(pageVoisine6);
	
	std::list<PageMere*> pageVoisine7{p6, p8};
	p7->ajoutVoisine(pageVoisine7);

	std::list<PageMere*> pageVoisine8{p2};
	p8->ajoutVoisine(pageVoisine8);

	std::list<PageMere*> pageVoisine9{p4, p10};
	p9->ajoutVoisine(pageVoisine9);

	std::list<PageMere*> pageVoisine10{p1, p5, p9, p11};
	p10->ajoutVoisine(pageVoisine10);

	std::list<PageMere*> pageVoisine11{p10};
	p11->ajoutVoisine(pageVoisine11);

	std::list<PageMere*> pageVoisine12{};
	p12->ajoutVoisine(pageVoisine12);
	
	std::list<PageMere*> pageVoisine13{};
	p13->ajoutVoisine(pageVoisine13);

	// Insertion des pages dans le réseau
    ReseauMere *r3 = new Reseau3();
	r3->inserer(p1);
	r3->inserer(p2);
	r3->inserer(p3);
	r3->inserer(p4);
	r3->inserer(p5);
	r3->inserer(p6);
	r3->inserer(p7);
	r3->inserer(p8);
	r3->inserer(p9);
	r3->inserer(p10);
	r3->inserer(p11);
	r3->inserer(p12);
	r3->inserer(p13);
	
	// Ajout dans la matrice
	r3->remplirMatrice();

	// Affichage du réseau
	cout<<"Affichage du réseau :"<<endl;
    r3->afficherReseau();
	cout<<endl<<"--------------------------------------"<<endl;

	// Affichage des pages accessible à partir d'une page
	map <PageMere*,bool> Accessible;
	Accessible = r3->accessible(p11);
	cout<<"Pages accessible depuis "<<p11->getNom()<<" : ";
	for(pair<PageMere*,bool> p : Accessible)
	{
		p.first->afficherPage();
		cout<<" ";
	}
	cout<<endl<<"--------------------------------------"<<endl;
}

int main()
{
	cout<<endl<<"////////////////////////////////////////////"<<endl<<"/////////\tSolution 1\t////////////"<<endl<<"////////////////////////////////////////////"<<endl<<endl;
	Solution1();
	cout<<endl;

	cout<<endl<<"////////////////////////////////////////////"<<endl<<"/////////\tSolution 2\t////////////"<<endl<<"////////////////////////////////////////////"<<endl<<endl;
	Solution2();
	cout<<endl;

cout<<endl<<"////////////////////////////////////////////"<<endl<<"/////////\tSolution 3\t////////////"<<endl<<"////////////////////////////////////////////"<<endl<<endl;
	Solution3();
	cout<<endl;
	return 0;
}
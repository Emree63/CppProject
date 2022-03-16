#include <iostream>
#include <string>
#include "page.hpp"
#include "Reseau.hpp"

using namespace std;

void testPage()
{
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

	cout<<p1<<endl;
	
}

int main()
{
	// testPage();
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

	r1.insererHyperliens(&p1,&p2);
	r1.insererHyperliens(&p1,&p3);
	r1.insererHyperliens(&p1,&p4);
	r1.insererHyperliens(&p1,&p7);
	r1.insererHyperliens(&p1,&p10);

	r1.insererHyperliens(&p2,&p3);
	r1.insererHyperliens(&p2,&p5);
	r1.insererHyperliens(&p2,&p8);

	r1.insererHyperliens(&p3,&p1);
	r1.insererHyperliens(&p3,&p6);
	r1.insererHyperliens(&p3,&p9);
	r1.insererHyperliens(&p3,&p11);
	r1.insererHyperliens(&p3,&p12);
	r1.insererHyperliens(&p3,&p13);

	r1.insererHyperliens(&p4,&p1);
	r1.insererHyperliens(&p4,&p5);
	r1.insererHyperliens(&p4,&p6);
	r1.insererHyperliens(&p4,&p8);
	r1.insererHyperliens(&p4,&p9);

	r1.insererHyperliens(&p5,&p2);

	r1.insererHyperliens(&p6,&p4);
	r1.insererHyperliens(&p6,&p7);

	r1.insererHyperliens(&p7,&p6);
	r1.insererHyperliens(&p7,&p8);

	r1.insererHyperliens(&p8,&p2);

	r1.insererHyperliens(&p9,&p4);
	r1.insererHyperliens(&p9,&p10);

	r1.insererHyperliens(&p10,&p1);
	r1.insererHyperliens(&p10,&p5);
	r1.insererHyperliens(&p10,&p9);
	r1.insererHyperliens(&p10,&p11);

	r1.insererHyperliens(&p11,&p10);

	cout<<r1<<endl;
	map <Page*,bool> Accessible;
	Accessible = r1.accessible(&p14);
	for(pair<Page*,bool> p : Accessible)
	{
		cout<<*(p.first)<<" ";
	}
	cout<<endl;
	return 0;
}


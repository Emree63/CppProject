#include <iostream>
#include <string>
#include "page.hpp"

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
	Page p9("pate.html");
	Page p10("pateFeuilleté.html");
	Page p11("tarteThon.html");
	Page p12("thon.html");
	Page p13("foie.html");
	Page p14("réglisse.html");

	p1.afficherPage();
	
}

int main()
{
	testPage();
	return 0;
}

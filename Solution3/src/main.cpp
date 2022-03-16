#include <iostream>
#include <string>
#include "page.hpp"
#include "Reseau.hpp"

using namespace std;

void testPage(){

    Page p1("recettes.html");
	Page p2("ustencils.html");
	// Page p3("ingredients.html");
	// Page p4("tartePomme.html");
	// Page p5("plat.html");
	// Page p6("pomme.html");
	// Page p7("compote.html");
	// Page p8("économe.html");
	// Page p9("pateFeuilleté.html");
	// Page p10("tarteThon.html");
	// Page p11("thon.html");
	// Page p12("foie.html");
	// Page p13("réglisse.html");

}


int main()
{
    testPage();
    Reseau r1;
    r1.inserer(&p1);
	r1.inserer(&p2);
    r1.insererHyperliens(&p1,&p1,0);
    r1.insererHyperliens(&p1,&p2,1);
    r1.insererHyperliens(&p2,&p2,0);
    r1.insererHyperliens(&p2,&p1,0);
    cout<<r1<<endl;
    return 0;
}
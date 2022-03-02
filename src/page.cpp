#include <iostream>
#include <vector>
#include <string>
#include "page.hpp"

using namespace std;

Page::Page(string nom): nom(nom){}

Page::~Page(){}

string Page::getNom()
{
	return nom;
}

void Page::ajoutVoisine(std::vector<Page*> voisine)
{
	pageVoisine=voisine;
}


// list <Page*> Page::chemin(Page* p)
// {
	
// }

void Page::afficherChemin(list <Page*> chemin)
{
	cout<<"Liste des pages accessibles : "<<endl;
	for(Page* p: chemin)
	{
		cout<<*this<<endl;
	}
}

ostream & operator <<(ostream &s, Page &p)
{
	s<<p.getNom();
	return s;
}




void Page::afficherVoisines()
{
	cout<<nom<<" : {";
	for(int it=0; it!=pageVoisine.size()-1; it++)
	{
		cout<<*pageVoisine[it]<<" ,";
	}
	int it2=pageVoisine.size();
	cout<<*pageVoisine[it2]<<" }"<<endl;
}
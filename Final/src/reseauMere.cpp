#include "reseauMere.hpp"
using namespace std;

ReseauMere::ReseauMere(){

}

ReseauMere::~ReseauMere(){

}

map<PageMere*,bool> ReseauMere::accessible(PageMere* p){
    /**
    * \fn accessible(Page* p)
    * \brief Algorithme d'accessibilité depuis une page.
    *
    * \param p Page.
    * 
    * \return page_visite Map des pages accessible
    */

    Pile pile;
    PageMere* tmp;
    map<PageMere*,bool> page_visite;
    pile.empiler(p);
    while(!pile.estVide())
    {
        tmp=pile.depiler();
        if (page_visite.find(tmp) == page_visite.end())
            page_visite[tmp]=true;
        list<PageMere*> voisinTmp = Voisin(tmp);
        for(PageMere *voisin : voisinTmp)
            if(page_visite.find(voisin) == page_visite.end())
                pile.empiler(voisin);
    }
    return page_visite;
}
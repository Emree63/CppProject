#include "pile.hpp"
#include <iostream>

using namespace std;

 
int main (){
 
    // Instanciation d'une pile
    Pile pile;
     
    // Insertion de six noeuds dans la pile
    pile.empiler ("Mostafa");
    pile.empiler ("Omar");
    pile.empiler ("Sara");
    pile.empiler ("Mohamed");
    pile.empiler ("Moneim");
    pile.empiler ("Dounia");
    pile.empiler ("Abdelmalek");
     
    // Afficher les valeurs de noeuds
    cout << "Afficher la pile" << endl;
    pile.afficher ();
 
    cout<<'\n';
 
    // afficher les valeurs de trois noeuds
    cout << "Afficher la tete de la pile" << endl;
    cout << pile.premier () << endl;
     
    cout<<'\n';
 
    // Supprimer trois noeuds
    cout << "Supprimer quelques noeuds et afficher la pile" << endl ;
    pile.depiler ();
    pile.depiler ();
    pile.afficher ();
 
    cout<<'\n';
    cout << "Afficher la tete de la pile" << endl;
    cout << pile.premier () << endl;
 
    cout<<'\n';
     
    // Afficher la taille apres la suppression
    cout << "Nombre de noeuds dans la pile: " << pile.taille() ;
 
    return 0;
}
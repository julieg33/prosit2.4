#include <iostream>
#include "recepteur.h"
#include "emetteur.h"


using namespace std;


int main()
{


	Emetteur* a=new Emetteur;
	Recepteur* c= new Recepteur;
	Recepteur* d = new Recepteur;
	a->ajouterRecepteur(c);
	
	a->envoyer("bonjour c");
	a->envoyer("bonjour d");
	a->envoyer("bonjour e");

	a->ajouterRecepteur(d);
	cout << "----------RECEPTEUR C1----------" << endl;
	c->ecouter();

	cout << "----------RECEPTEUR D1----------" << endl;
	d->ecouter();
	a->envoyer("helloo");
	cout << "----------RECEPTEUR C2----------" << endl;
	c->ecouter();

	cout << "----------RECEPTEUR D2----------" << endl;
	d->ecouter();
	delete a,c,d;
	return 0;
}
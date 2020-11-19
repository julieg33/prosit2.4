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
	c->ecouter();
	d->ecouter();
	a->envoyer("helloo");
	cout << "ecoute :" << endl;

	c->ecouter();
	d->ecouter();
	return 0;
}
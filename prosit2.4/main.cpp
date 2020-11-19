#include <iostream>
#include "recepteur.h"
#include "emetteur.h"


using namespace std;


int main()
{


	Emetteur a;
	Recepteur* c = new Recepteur;
	a.ajouterRecepteur(c);
	a.envoyer("bonjour c");
	a.envoyer("bonjour d");
	a.envoyer("bonjour e");
	c->ecouter();

	return 0;
}
#include <iostream>
#include "recepteur.h"
#include "emetteur.h"


using namespace std;


int main()
{


	Emetteur a;
	Recepteur c ;
	
	a.envoyer(c, "bonjour c");
	a.envoyer(c, "bonjour d");
	a.envoyer(c, "bonjour e");

	return 0;
}
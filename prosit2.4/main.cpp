#include <iostream>
#include "recepteur.h"
#include "emetteur.h"


using namespace std;


int main()
{


	Emetteur a;
	Recepteur b, c;
	a.diffuser(b, "bonjour b");
	a.diffuser(c, "bonjour c");

	return 0;
}
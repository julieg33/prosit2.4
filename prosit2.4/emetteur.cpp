#include "emetteur.h"
using namespace std;

typedef void(Recepteur::* pointeur)(std::string);
pointeur signal = &Recepteur::ecouter;

void Emetteur::diffuser(Recepteur objet, std::string message)
{
	(objet.*signal)(message);
}
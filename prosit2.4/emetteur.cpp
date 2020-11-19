#include "emetteur.h"
#include "recepteur.h"
using namespace std;

typedef void(Recepteur::* pointeur)(std::string);
pointeur signal = &Recepteur::getTransmission;

typedef void(Recepteur::* ptr)(vector<string>);
ptr recupere = &Recepteur::getMessage;


void Emetteur::envoyer(Recepteur objet, std::string message)
{
	(objet.*signal)(message);
	m_message.push_back(message);
	(objet.*recupere)(m_message);

}

/*void Emetteur::ajouterRecepteur(Recepteur* recepteur)
{
	m_recepteur.push_back(recepteur);
}*/

/*std::vector <std::string> Emetteur::getMessage()
{
	return m_message;
}*/
#include "emetteur.h"
#include "recepteur.h"
using namespace std;


typedef void(Recepteur::* ptr)(vector<string>);
ptr recupere = &Recepteur::getMessage;

void Emetteur::envoyer(std::string message)
{
	for (int i = 0; i < m_recepteur.size(); i++)
	{
		m_message.push_back(message);
		(m_recepteur[i]->*recupere)(m_message);
	}
}

void Emetteur::ajouterRecepteur(Recepteur* recepteur)
{
	m_recepteur.push_back(recepteur);
}


#include "recepteur.h"
using namespace std;

Recepteur::Recepteur()
{}

void Recepteur:: getMessage(vector<string> listeMessage)
{
	l_message = listeMessage;
}


void Recepteur::ecouter()
{
	cout << "contenu recepteur vaut " << endl;
	cout << l_message.size() << "messages"<< endl;
	for (int i = 0; i < l_message.size(); i++)
	{
		cout << l_message[i] << endl;
	}
}



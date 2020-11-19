#include "recepteur.h"
using namespace std;

vector <string> Recepteur::l_message;

Recepteur::Recepteur()
{}

void Recepteur:: getMessage(vector<string> listeMessage)
{
	l_message = listeMessage;
}


void Recepteur::ecouter( )
{
	for (int i = 0; i < l_message.size(); i++)
	{
		cout << l_message[i] << endl;

	}
}



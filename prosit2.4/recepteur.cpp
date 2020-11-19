#include "recepteur.h"
using namespace std;

/*typedef vector<string>(Emetteur::* pointeur)();
pointeur liste = &Emetteur::getMessage;*/

Recepteur::Recepteur()
{}

void Recepteur:: getMessage(vector<string> listeMessage)
{
	l_message = listeMessage;
	cout << "contenu c vaut " << endl;
	cout << l_message.size() << endl;
	for (int i = 0; i < l_message.size(); i++)
	{

		cout << l_message[i] << endl;
	}

}

/*void Recepteur::ecouter()
{
	for (int i = 0; i < l_message.size(); i++)
	{

		cout <<"message " <<i << " : " << l_message[i] << endl;
	}
}*/

void Recepteur::getTransmission(std::string message)
{
	cout <<"le message est :"<< message << endl;


}
/*
void Recepteur::connecterA(Emetteur emetteur)
{
	(emetteur.*liste)();
}*/

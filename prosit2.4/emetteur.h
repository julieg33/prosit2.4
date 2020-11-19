#pragma once
#include <iostream>
#include "recepteur.h"
#include <vector>


class Emetteur
{
public:
	void envoyer(std::string message);
	void ajouterRecepteur(Recepteur* recepteur);
	//std::vector <std::string> getMessage();

private :
	std::vector <std::string> m_message;
	std::vector <Recepteur*> m_recepteur;
};


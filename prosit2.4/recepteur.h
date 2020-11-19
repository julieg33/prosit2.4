#pragma once
#include <iostream>
#include <vector>
#include "emetteur.h"

class Recepteur
{
public :
	Recepteur();
	void getMessage(std::vector<std::string> listeMessage);
	void getTransmission(std::string message);
	//void connecterA(Emetteur emetteur);
	//void ecouter();
private :
	std::vector<std::string> l_message;

};


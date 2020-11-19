#pragma once
#include <iostream>
#include <vector>

class Recepteur
{
public :
	Recepteur();
	void getMessage(std::vector<std::string> listeMessage);
	void ecouter();
private :
	static std::vector<std::string> l_message;
};


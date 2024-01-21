#pragma once
#include <iostream>


class Regie
{
private:
	std::string vorname;
	std::string nachname;

public:
	Regie(std::string _vorname, std::string _nachname) :
		vorname(_vorname), nachname(_nachname) {}

	std::string getVorname() {
		return vorname;
	}

	std::string getNachname() {
		return nachname;
	}
};


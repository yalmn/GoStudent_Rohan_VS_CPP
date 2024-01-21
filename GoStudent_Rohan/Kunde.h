#pragma once

#include <iostream>
#include "Email.h"

class Kunde
{
private:
	std::string vorname;
	std::string nachname;
	Email email;

public:
	Kunde(std::string _vorname, std::string _nachname) :
		vorname(_vorname), nachname(_nachname), email(_vorname, _nachname) { 
	}

	std::string getVorname() {
		return vorname;
	}

	std::string getNachname(){
		return nachname;
	}

	Email getEmail() {
		return email;
	}
};


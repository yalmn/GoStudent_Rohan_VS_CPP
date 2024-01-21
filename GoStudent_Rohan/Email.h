#pragma once

#include <iostream>
#include "Kunde.h"

class Email
{
private:
	Kunde kunde;
	std::string passwort;
	std::string const domain = "@filmverleih.de";

	std::string emailAdresse;


public:
	Email(Kunde _kunde, std::string _passwort) :
		kunde(_kunde), passwort(_passwort) {

		emailAdresse = erstelleEmail();

	}


	std::string erstelleEmail() {
		return kunde.getVorname() + "." + kunde.getNachname() + domain;
	}

	std::string getEmailAdresse() {
		return emailAdresse;
	}
};


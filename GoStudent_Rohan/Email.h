#pragma once

#include <iostream>

class Email
{
private:
	std::string passwort;
	std::string vorname;
	std::string nachname;
	std::string const domain = "@filmverleih.de";
	std::string emailAdresse;



public:
	Email(std::string _vorname, std::string _nachname) :
		vorname(_vorname), nachname(_nachname) {

		emailAdresse = erstelleEmail();

	}

	void setPasswort(std::string password) {
		this->passwort = password;
	}

	std::string getPasswort() {
		return passwort;
	}

	std::string erstelleEmail() {
		return vorname + "." + nachname + domain;
	}

	std::string getEmailAdresse() {
		return emailAdresse;
	}
};


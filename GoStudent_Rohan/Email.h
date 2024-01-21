#pragma once

#include <iostream>
#include "Kunde.h"

using namespace std;

class Email
{
private:
	Kunde kunde;
	string passwort;


public:
	Email(Kunde _kunde, string _passwort) {
		kunde.getVorname();
	}
};


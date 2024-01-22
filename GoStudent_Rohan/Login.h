#pragma once

#include<iostream>
#include "Kunde.h"


class Login
{
public:
	Login(Kunde kunde, std::string passwort) {
		if (passwort == kunde.getEmail().getPasswort()) {
			std::cout << "Log-In war erfolgreich." << std::endl;
		}
		else {
			std::cout << "Log-In war nicht erfolgreich." << std::endl;
		}
	}


};


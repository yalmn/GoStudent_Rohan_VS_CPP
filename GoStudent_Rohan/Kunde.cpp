
#include <iostream>
#include "Kunde.h"

int main()
{
	Kunde halil("Halil", "Yalman");
	halil.getEmail().setPasswort("12345");
	

	std::cout << halil.getEmail().getEmailAdresse() << std::endl;

}
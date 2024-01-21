#include "Email.h"


#include <iostream>

int main()
{
	Kunde rohan("Rohan", "Sharma");
	Email rohanEmail(rohan, "123");

	std::string rohansEmailAdresse = rohanEmail.getEmailAdresse();

	std::cout << rohansEmailAdresse << std::endl;


	return 0;

}
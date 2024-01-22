#include "Login.h"


int main()
{
	Kunde halil("Halil", "Yalman");
	halil.getEmail().setPasswort("Admin123");
	std::cout << halil.getEmail().getPasswort() << std::endl;

	Login logHalil(halil, "");



	return 0;
}
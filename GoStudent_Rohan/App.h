#pragma once

#include <iostream>

class App
{
private:
	const char* name;
	std::string nachname;


public:
	static void doSomething() {
		std::cout << "I have done." << std::endl;
	}
};


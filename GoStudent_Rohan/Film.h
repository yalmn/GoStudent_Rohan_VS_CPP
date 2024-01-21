#pragma once

#include <iostream>
#include "Regie.h"



class Film
{
protected:
	std::string titel;
	int erscheinungsjahr;
	Regie regie;

public:
	Film(std::string _titel, Regie _regie, int _erscheinungsjahr)  :
		titel(_titel), regie(_regie), erscheinungsjahr(_erscheinungsjahr) {}

	virtual void showFilm() {
		std::cout << "Titel: " << titel << " Regie: " << regie.getVorname() << " " << regie.getNachname() << " Erscheinungsjahr: " << erscheinungsjahr << std::endl;
	}

	virtual std::string getTitel() {
		return titel;
	}

	virtual int getErscheinungsjahr() {
		return erscheinungsjahr;
	}

	virtual Regie getRegie() {
		return regie;
	}
};

class HorrorFilm : public Film
{
public:
	HorrorFilm(std::string _titel, Regie _regie, int _erscheinungsjahr) :
		Film(_titel, _regie, _erscheinungsjahr) {}
};

class FantasyFilm : public Film
{
public:
	FantasyFilm(std::string _titel, Regie _regie, int _erscheinungsjahr) :
		Film(_titel, _regie, _erscheinungsjahr) {}
};


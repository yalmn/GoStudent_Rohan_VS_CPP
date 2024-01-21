#pragma once

#include <iostream>
#include <vector>
#include "Film.h"

class Filmdatenbank
{
private:
	std::vector<Film> filmListe;

public:
	Filmdatenbank() {
		filmListe = std::vector<Film>();
	}

	void addMovie(Film film) {
		filmListe.push_back(film);
	}

	void removeMovie(Film film) {
		for (auto it = filmListe.begin(); it != filmListe.end(); ++it) {
			if (it->getTitel() == film.getTitel()) {
				filmListe.erase(it);
				break;
			}
		}
	}

	void showFilmListe() {
		for (int i = 0; i < filmListe.size(); i++) {
			filmListe.at(i).showFilm();
		}
	}
};


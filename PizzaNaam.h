#pragma once

/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Mustafa Kattan
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   PizzaNaam.h
Versie:         0.1
				0.2
				1.0
\************************************************************************/

// Declaratie
class PizzaNaam
{
public:
	string pizzaNaamH201;

	// Constructor
	PizzaNaam() {};

	// Methoden
	void Invoeren();
};



// Methoden
void PizzaNaam::Invoeren()
{
	// Implementatie
		// UI
	cout << "***Welkom bij de bestelapp van Domino's***\n"
		<< "Plaats hier je bestelling: \n\n"
		<< "Stel zelf je pizza samen\n" << endl;

	cout << "Voer de naam van de pizza in: ";
	getline(cin, pizzaNaamH201);
}

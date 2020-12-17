#pragma once
/************************** Module Header *******************************\
Opdracht:       opdracht21
Auteur:			Mustafa Kattan
Aanmaakdatum:   03-04-2019 09:45
Bestandsnaam:   PizzaNaam.h
Versie:         0.1
\************************************************************************/
// Declaratie
class Bezorging
{
private:
	string postCode;
	string huisNummer;
	string bezorgDag;
	string bezorgTijd;
	int actieCode;

public:
	string bestelCodeD204;

	// Constructor
	Bezorging() {};

	// Methoden
	void Invoeren(Bestelling bestellingen);
	void Weergeven();
};


// Methoden
void Bezorging::Invoeren(Bestelling bestellingen)
{
	// Implementatie
	cout << "Waar wil je dat de bestelling wordt bezorgd? \n"
		<< "Voer je postcode in: ";
	cin >> postCode;
	cout << "Voer je huisnummer in: ";
	cin >> huisNummer;
	cout << "Op welke dag wil je je bestelling laten bezorgen: ";
	cin >> bezorgDag;
	cout << "Op welk tijdstip wil je je bestelling laten bezorgen: ";
	cin >> bezorgTijd;
	cout << "Voer je actiecode in: ";
	cin >> actieCode;

	// Toekenning
	bestelCodeD204 = bestellingen.bestelCodeH204;
}

void Bezorging::Weergeven()
{
	// UI
	cout << "\nJe bestelling met bestelcode " << bestelCodeD204 << " wordt op: \n"
		<< bezorgDag << ", " << bezorgTijd << endl
		<< "bezorgt op het adres:\n"
		<< "Postcode " << postCode << " huisnummer " << huisNummer << endl << endl
		<< "Je hebt de volgende actiecode gebruikt: " << actieCode << endl;
}

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

#include "Bestelling.h"
#include "Bezorging.h"

int main()
{
	// Constructie
	Bestelling bestellingen;
	Bezorging bezorgingen;



	// Functieaanroep
	bestellingen.Invoeren();
	bestellingen.Weergeven();
	bezorgingen.Invoeren(bestellingen);
	bezorgingen.Weergeven();

	system("pause");
}
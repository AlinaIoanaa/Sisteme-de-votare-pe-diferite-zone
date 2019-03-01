#include <iostream>
#include "Zona.h"
using namespace std;

Zona::Zona()
{
	nrZona = 0;
	populatie = 0;
}

Zona::Zona(int nr, long int nrPopulatie)
{
	nrZona = nr;
	populatie = nrPopulatie;
}

float Zona::voturi_da()
{
	return 0;
}

float Zona::voturi_nu()
{
	return 0;
}

int Zona::procent()
{
	return 0;
}

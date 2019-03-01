#include <iostream>
#include "Zona2.h"
using namespace std;

Zona2::Zona2() // initializari
{
	int i;
	nrZona = 2;
	for(i = 0; i < 10; i++)
	{
		functie[i] = 0;
	}
	for(i = 0; i < 5; i++)
	{
		Da[i] = 0;
		Nu[i] = 0;
	}
}

Zona2::Zona2(int nr, long int nrPopulatie, long int fct[10], long int da[5], long int nu[5]) : Zona(nr, nrPopulatie)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		functie[i] = fct[i];
	}
	for(i = 0; i < 5; i++)
	{
		Da[i] = da[i];
		Nu[i] = nu[i];
	}
}

float Zona2::voturi_da()
{
	long int vot[5], i, 
			 pct = 10; //pct = nr. de puncte corespunzator functiei
	float suma = 0;
	for(i = 0 ; i < 5; i++)
	{
		vot[i] = pct * Da[i];
		pct--;
	}
	for(i = 0; i < 5; i++)
	{
		suma += vot[i];
	}
	return suma;
}

float Zona2::voturi_nu()
{
	long int vot[5], i, 
			 pct = 10; //pct = nr. de puncte corespunzator functiei
	float suma = 0;
	for(i = 0 ; i < 5; i++)
	{
		vot[i] = pct * Nu[i];
		pct--;
	}
	for(i = 0; i < 5; i++)
	{
		suma += vot[i];
	}
	return suma;
}

int Zona2::procent()
{
	long int i,
			 persoaneVot = 0, //persoaneVot = nr. de persoane care au votat
			 totalPersoane = 0; //totalPersoane = nr. total de persoane care au dreptul sa voteze
	float suma;
	for(i = 0; i < 5; i++)
	{
		totalPersoane += functie[i];
	}
	for(i = 0; i < 5; i++)
	{
		persoaneVot = persoaneVot + Da[i] + Nu[i];
	}
	suma = (float(persoaneVot) / float(totalPersoane)) * 100;
	return suma;
}

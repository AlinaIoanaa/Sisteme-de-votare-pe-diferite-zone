#include <iostream>
#include "Zona3.h"
using namespace std;

Zona3::Zona3()
{
	nrZona = 3; 
	varsta14_20 = 0;
	varsta20_40 = 0;
	varsta40 = 0; 
	Da = 0;
	Nu = 0;
	varstaEligibila = 14; //varsta minima de la care se poate vota
}

Zona3::Zona3(int nr, long int nrPopulatie, long int vr0, long int vr14, long int vr20, long int vr40, long int da, long int nu, long int vrEl) : Zona(nr, nrPopulatie)
{
	varsta0_14 = vr0; 
	varsta14_20 = vr14;
	varsta20_40 = vr20;
	varsta40 = vr40; 
	Da = da;
	Nu = nu;
	varstaEligibila = vrEl;
}

float Zona3::voturi_da()
{
	return Da;
}

float Zona3::voturi_nu()
{
	return Nu;
}

int Zona3::procent()
{
	long int persoaneVot, totalPersoane; //persoaneVot = nr. de persoane care au votat
										 //totalPersoane = nr. total de persoane care au dreptul sa voteze
	float suma;
	if(varstaEligibila == 40)
	{
		totalPersoane = varsta40;
	}
	else
	{
		if(varstaEligibila == 20)
		{
			totalPersoane = varsta20_40 + varsta40;
		}
		else
		{
			if(varstaEligibila == 14)
			{
				totalPersoane = varsta14_20 + varsta20_40 + varsta40;
			}
		}
	}
	persoaneVot = Da + Nu;
	suma = (float(persoaneVot) / float(totalPersoane)) * 100;
	return suma;
}

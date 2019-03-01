#include <iostream>
#include "Zona1.h"
using namespace std;

class Zona2 : public Zona
{
	long int functie[10]; //nr. de persoane cu o anumita functie
	long int Da[5]; //nr. de persoane care au votat da, corespunzator fiecarei functii
	long int Nu[5]; //nr. de persoane care au votat nu, corespunzator fiecarei functii
	public:
		Zona2();
		Zona2(int, long int, long int [], long int [], long int []);
		virtual float voturi_da();
		virtual float voturi_nu();
	    virtual int procent();
};

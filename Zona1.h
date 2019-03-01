#include <iostream>
#include "Zona.h"
using namespace std;

class Zona1 : public Zona
{ 
	long int persCu4Obl; //persoane care au respectat 4 obligatii
	long int persCu3Obl; //persoane care au respectat 3 obligatii
	long int persCu2Obl; //persoane care au respectat 2 obligatii
	long int persCu1Obl; //persoane care au respectat o obligatie
	long int persCu0Obl; //persoane care nu au respectat nicio obligatie
	//Da
	long int Da4; //persoane cu 4 obligatii care au votat da
	long int Da3; //persoane cu 3 obligatii care au votat da
	long int Da2; //persoane cu 2 obligatii care au votat da
	long int Da1; //persoane cu 1 obligatii care au votat da
	long int Da0; //persoane cu 0 obligatii care au votat da
	//Nu
	long int Nu4; //persoane cu 4 obligatii care au votat nu
	long int Nu3; //persoane cu 3 obligatii care au votat nu
	long int Nu2; //persoane cu 2 obligatii care au votat nu
	long int Nu1; //persoane cu 1 obligatii care au votat nu
	long int Nu0; //persoane cu 0 obligatii care au votat nu 
	public:
		Zona1();
		Zona1(int, long int, long int, long int, long int, long int, long int, 
			  				 long int, long int, long int, long int, long int, 
			  				 long int, long int, long int, long int, long int);
		virtual float voturi_da();
		virtual float voturi_nu();
	    virtual int procent();
};

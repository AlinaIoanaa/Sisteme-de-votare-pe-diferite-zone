#include <iostream>
#include "Zona2.h"

using namespace std;

class Zona3 : public Zona
{
	long int varsta0_14; //persoane cu varste cuprinse intre 0-14
	long int varsta14_20; //persoane cu varste cuprinse intre 14-20
	long int varsta20_40; //persoane cu varste cuprinse intre 20-40
	long int varsta40; //persoane peste 40 de ani 
	long int Da; //persoane care au votat da
	long int Nu; //persoane care au votat nu
	long int varstaEligibila; //varsta minima de la care se poate vota
	public:
		Zona3();
		Zona3(int, long int, long int, long int, long int, long int, long int, long int, long int);
		virtual float voturi_da();
		virtual float voturi_nu();
	    virtual int procent();
};


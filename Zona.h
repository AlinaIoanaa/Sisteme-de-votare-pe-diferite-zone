#include <iostream>
using namespace std;

class Zona
{
	protected:
		int nrZona;
		long int populatie;
	public:
		Zona();
		Zona(int, long int);
		virtual float voturi_da();
		virtual float voturi_nu();
		virtual int procent();
};

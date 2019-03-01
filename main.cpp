#include <iostream>
#include <fstream>
#include <string.h>
#include "Zona3.h"
using namespace std;

int main() 
{
	long int nr, nrPopulatie1, obl4, obl3, obl2, obl1, obl0, //zona 1
	         nrPopulatie2, fct[10], da[5], nu[5], i, j, k, //zona 2
	         nrPopulatie3, vr0, vr14, vr20, vr40, daa, nuu, vrEl, //zona 3
	         nrZone;
	char c, aux[10];
	
	ifstream f;
	ofstream fout;
	f.open("in.txt"); //deschiderea fisierului de intrare
	fout.open("out.txt"); //deschiderea fisierului de iesire
	
	f >> nr >> nrPopulatie1 >> obl4 >> obl3 >> obl2 >> obl1 >> obl0; //zona 1
	f >> nr >> nrPopulatie2; 
	for(i = 0; i < 10; i++)
	{
		f >> fct[i];
	} //zona 2
	f >> nr >> nrPopulatie3 >> vr0 >> vr14 >> vr20 >> vr40; //zona 3
	
	Zona **zone = new Zona*[1];
	for(k = 0; k < 3; k++)
	{
		f >> nrZone >> nr;
		if(nr == 3)
		{
			f >> vrEl;
		}
		f.get(c);
		fout << "Zona " << k + 1 << endl;
		for(i = 0; i < nrZone; i++)
		{
			do
			{
				f.get(c);
				fout << c;
			}while(c != '\n');
			f >> aux; //cuvantul DA
			if(nr != 3)
			{
				for(j = 0; j < 5; j++)
				{
					f >> da[j];
				}
				f >> aux; //cuvantul NU
				for(j = 0; j < 5; j++)
				{
					f >> nu[j];
				}
			}
			if(nr == 3)
			{
				f >> daa;
				f >> aux; //cuvantul NU
				f >> nuu;
			}
			f.get(c);
			if(nr == 1)
			{
				zone[i] = new Zona1(1, nrPopulatie1, obl4, obl3, obl2, obl1, obl0, da[0], da[1], da[2], da[3], da[4], nu[0], nu[1], nu[2], nu[3], nu[4]);
			}
			if(nr == 2)
			{
				zone[i] = new Zona2(2, nrPopulatie2, fct, da, nu);
			}
			if(nr == 3)
			{
				zone[i] = new Zona3(3, nrPopulatie3, vr0, vr14, vr20, vr40, daa, nuu, vrEl);
			}
			if(zone[i]->voturi_da() > zone[i]->voturi_nu())
			{
				fout << "Aprobat " << zone[i]->voturi_da() << "-" << zone[i]->voturi_nu() << " " << zone[i]->procent() << "%" << endl;
			}
			else
			{
				if(zone[i]->voturi_da() == zone[i]->voturi_nu())
				{
					fout << "Egalitate " << zone[i]->voturi_da() << "-" << zone[i]->voturi_nu() << " " << zone[i]->procent() << "%" << endl;
				}
				else
				{
					fout << "Respins " << zone[i]->voturi_da() << "-" << zone[i]->voturi_nu() << " " << zone[i]->procent() << "%" << endl;
				}
			}
		} 
	}
	
	f.close(); //inchiderea fisierului de intrare
	fout.close(); //inchiderea fisierului de iesire
	return 0;
}

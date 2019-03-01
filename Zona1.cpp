#include <iostream>
#include "Zona1.h"
using namespace std;

Zona1::Zona1() 
{
	nrZona = 1;
	persCu4Obl = 0;
	persCu3Obl = 0; 
	persCu2Obl = 0; 
	persCu1Obl = 0; 
	persCu0Obl = 0; 
	Da4 = 0; 
	Da3 = 0; 
	Da2 = 0; 
	Da1 = 0; 
	Da0 = 0; 
	Nu4 = 0; 
	Nu3 = 0;
	Nu2 = 0;
	Nu1 = 0;
	Nu0 = 0;
}

Zona1::Zona1(int nr, long int nrPopulatie, long int obl4, long int obl3, long int obl2, long int obl1, long int obl0, 
			 							   long int da4, long int da3, long int da2, long int da1, long int da0, 
			 							   long int nu4, long int nu3, long int nu2, long int nu1, long int nu0) : Zona(nr, nrPopulatie)
{
	persCu4Obl = obl4;
	persCu3Obl = obl3; 
	persCu2Obl = obl2; 
	persCu1Obl = obl1; 
	persCu0Obl = obl0; 
	Da4 = da4; 
	Da3 = da3; 
	Da2 = da2; 
	Da1 = da1; 
	Da0 = da0; 
	Nu4 = nu4; 
	Nu3 = nu3;
	Nu2 = nu2;
	Nu1 = nu1;
	Nu0 = nu0;
}

float Zona1::voturi_da()
{
	float vot4, vot3, vot2, vot1, vot0, votTotal;
	vot4 = Da4;
	vot3 = Da3 * 0.8; // 1 - 0,2 * 1(indatoriri neindeplinite) = 0,8
	vot2 = Da2 * 0.6; // 1 - 0,2 * 2(indatoriri neindeplinite) = 0,6
	vot1 = Da1 * 0.4; //1 - 0,2 * 3(indatoriri neindeplinite) = 0,4
	vot0 = Da0 * 0.2; //1 - 0,2 * 4(indatoriri neindeplinite) = 0,2
	votTotal = vot4 + vot3 + vot2 + vot1 + vot0;
	return votTotal;
}

float Zona1::voturi_nu()
{
	float vot4, vot3, vot2, vot1, vot0, votTotal;
	vot4 = Nu4;
	vot3 = Nu3 * 0.8; // 1 - 0,2 * 1(indatoriri neindeplinite) = 0,8
	vot2 = Nu2 * 0.6; // 1 - 0,2 * 2(indatoriri neindeplinite) = 0,6
	vot1 = Nu1 * 0.4; // 1 - 0,2 * 3(indatoriri neindeplinite) = 0,4
	vot0 = Nu0 * 0.2; //1 - 0,2 * 4(indatoriri neindeplinite) = 0,2
	votTotal = vot4 + vot3 + vot2 + vot1 + vot0;
	return votTotal;
}

int Zona1::procent()
{
	long int persoaneVot, totalPersoane; //persoaneVot = nr. de persoane care au votat
										 //totalPersoane = nr. total de persoane care au dreptul sa voteze
	float suma;
	persoaneVot = Da4 + Nu4 + Da3 + Nu3 + Da2 + Nu2 + Da1 + Nu1 + Da0 + Nu0; //102999
	//cout << persoaneVot << " ";
	totalPersoane = persCu4Obl + persCu3Obl + persCu2Obl + persCu1Obl + persCu0Obl; //149999
	//cout << totalPersoane << " ";
	suma = (float(persoaneVot) / float(totalPersoane)) * 100; //102999
	//cout << suma << " " << float(persoaneVot) / float(totalPersoane) << endl;
	return suma;
}

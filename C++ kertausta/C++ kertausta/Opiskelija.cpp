#include "Opiskelija.h"
#include<iostream>
using namespace std;


Opiskelija::Opiskelija(): opintoPisteet(0)
{
	cout << "Opiskelija-luokan rakentaja" << endl;
}

Opiskelija::Opiskelija(string aNimi, int aIka, int aApintoPisteet) : opintoPisteet(aApintoPisteet)
{
	nimi = aNimi;
	ika = aIka;
}

Opiskelija::~Opiskelija()
{
	cout << "Opiskelija-luokan purkaja" << endl;
}

void Opiskelija::tulostaTiedot()
{
	cout<<". Opiskelijalla on " << opintoPisteet << " opintopistetta" << endl;
}

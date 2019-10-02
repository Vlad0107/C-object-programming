#include "Osoite.h"
#include<iostream>
using namespace std;


Osoite::Osoite() : katuOsoite("unknown"), kunta("unknown")
{
	cout << "Osoitteen rakentaja" << endl;
}

Osoite::Osoite(const string& aKatuOsoite, const string& aKunta): katuOsoite(aKatuOsoite), kunta(aKunta)
{
	cout << "Osoitteen parametrillinen rakentaja" << endl;
}

Osoite::Osoite(const Osoite& aOsoite) : katuOsoite(aOsoite.katuOsoite), kunta(aOsoite.kunta) 
{
	cout << "Osoitteen kopioija" << endl;
}

Osoite::~Osoite()
{
}

void Osoite::setKatuOsoite(const string& aKatu)
{
	katuOsoite = aKatu;
}

void Osoite::setKunta(const string& aKunta)
{
	kunta = aKunta;
}

void Osoite::tulostaTiedot()
{
	cout << "Katuosoite on " << katuOsoite << " ja kunta" << kunta << endl;
}

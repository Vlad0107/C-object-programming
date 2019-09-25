#include "Henkilo.h"
#include<iostream>
using namespace std;


Henkilo::Henkilo() : ika(0), nimi("unknown")
{
	cout << "henkilon rakentaja" << endl;

}

Henkilo::Henkilo(const string& aNimi, int aIka) : ika(aIka), nimi(aNimi)
{
	cout << "henkilon 2 parametrinen rakentaja" << endl;
}

Henkilo::Henkilo( const string& aNimi, int aIka, string aKatu, string aKunta): ika(aIka),nimi(aNimi), osoite(aKatu,aKunta)
{
	cout << "henkilon 2 parametrinen rakentaja" << endl;
}

Henkilo::Henkilo(const Henkilo & aHlo) : ika(aHlo.ika), nimi(aHlo.nimi)
{
	cout << "Henkilon kopiorakentaja" << endl;
}


Henkilo::~Henkilo()
{
	//vapautetaan olion varaama dynaaminen muisti ja muut resurssit
	cout << "henkilon " << nimi << " purkaja" << endl;
}

string Henkilo::getNimi() const
{
	return nimi;
}

void Henkilo::setNimi(const string& aNimi)
{
	nimi = aNimi;
}

int Henkilo::getIka() const
{
	return ika;
}

void Henkilo::setIka(const int& aIka)
{
	if (aIka >= 0) {
		ika = aIka;
	}
}

void Henkilo::tulostaTiedot() const
{
	cout << "NIMI:" << nimi << endl;
	cout << "Ika:" << ika << endl;
}

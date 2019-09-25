#pragma once
#include<string>
#include "Osoite.h"
using namespace std;

class Henkilo
{
public:
	Henkilo();
	Henkilo(const string & aNimi, int aIka);
	Henkilo(const string& aNImi , int aIka, string, string);
	Henkilo(const Henkilo& aHlo);
	~Henkilo();;

	string getNimi() const;
	void setNimi(const string& aNimi);
	int getIka() const;
	void setIka(const int& aIka);
	void tulostaTiedot() const;

	

protected:
	int ika;
	string nimi;
	Osoite osoite;
};


#pragma once
#include<string>
#include "Osoite.h"
using namespace std;

class Henkilo
{
public:
	Henkilo(); // oleturakentaja ei luo osoitetta, vaan osoite on nullptr
	Henkilo(const string & aNimi, int aIka);						//K‰yt‰ const &, kun et halua atribuutin muuttuvan. Est‰‰ kopioinnin
	Henkilo(const string& aNImi , int aIka, string, string);
	Henkilo(const string& animi, int ainka, const Osoite&);
	Henkilo(const Henkilo& aHlo);
	//muistetaan vapauttaa resurssit, jos sellaisia on verrattuna
	~Henkilo();

	string getNimi() const;
	void setNimi(const string& aNimi);
	int getIka() const;
	void setIka(const int& aIka);
	void tulostaTiedot() const;
	void setOsoite(const Osoite& aOsoite);  //osoite p‰ivitet‰‰, jos oliolla on jo osoite
											//muuten luodaan osoite dynaamisesti nullptr:n tilalle

	

private:							// ‰l‰ k‰yt‰ protected
	int ika;
	string nimi;
	Osoite* osoite;
};


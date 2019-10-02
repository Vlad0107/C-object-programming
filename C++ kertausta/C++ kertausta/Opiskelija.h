#pragma once
#include "Henkilo.h"
class Opiskelija :
	public Henkilo
{
public:
	Opiskelija();
	Opiskelija(string, int, int aApintoPisteet);
	~Opiskelija();
	void tulostaTiedot();

private:
	int opintoPisteet;
};

/* Opiskelija(const string& a nimi, int aaika, int aopintopisteet)  :  Henkilo (aNimi, aAika), opintopisteet(aOpintopistee) {

}

void Tulostatiedot() const{

Henkilo::Tulostatiedot

}
*/


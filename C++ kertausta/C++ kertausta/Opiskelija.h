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


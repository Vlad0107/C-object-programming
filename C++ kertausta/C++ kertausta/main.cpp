#include "Henkilo.h"
#include "Opiskelija.h"
using namespace std;

void doSomething() {

	//heap (dynaaminenmuisti)
	Henkilo* p = new Henkilo();
	p->setIka(10);
	p->setNimi("Pekka");
	p->tulostaTiedot();

	delete p;//vapautetaan dynaaminen muisti

	//stack(pinomuisti)
	Henkilo k("Kalle", 10);
	k.tulostaTiedot();

	Henkilo v(k);
	k.tulostaTiedot();

}

void foo(const Henkilo& x) {
	x.tulostaTiedot();
}

void myFunc() {
	Henkilo* op1 = new Opiskelija("olli", 50, 60);
	op1->tulostaTiedot();

	delete op1; // poista t�m� niin tulee heap overflow
}

Henkilo kalle("kalle", 0);

int main() {
	
	kalle.tulostaTiedot();

	//stack
	Henkilo pekka("pekka", 20);
	pekka.tulostaTiedot();

	//heap
	Henkilo* op1 = new Opiskelija("olli", 50, 60);
	op1->tulostaTiedot();

	Henkilo* x = op1;

	delete op1;
	op1 = nullptr;

	x->tulostaTiedot();

	system("pause");
	return EXIT_SUCCESS;
}

/*Kysymys: Jos osoittimen takana oleva henkil� on opiskelija, kutsutaanko t�ll�in henkil�n vain
opiskelijan tulostaTiedot() -metodia? Miten virtual -sanan k�ytt� kantaluokassa metodin edess�
vaikuttaa tilanteeseen ja miksi?

Kutsutaan henkil�n tulostatiedot() metodia. Virtual sanan k�ytt� luo funktion, mutta sit� ei voida kutsua eli kutsutaan
opiskelijan funktiota.//
*/
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

	delete op1; // poista tämä niin tulee heap overflow
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

/*Kysymys: Jos osoittimen takana oleva henkilö on opiskelija, kutsutaanko tällöin henkilön vain
opiskelijan tulostaTiedot() -metodia? Miten virtual -sanan käyttö kantaluokassa metodin edessä
vaikuttaa tilanteeseen ja miksi?

Kutsutaan henkilön tulostatiedot() metodia. Virtual sanan käyttö luo funktion, mutta sitä ei voida kutsua eli kutsutaan
opiskelijan funktiota.//
*/
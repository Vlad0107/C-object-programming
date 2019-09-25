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

int main() {
	
	Henkilo kalle("Kalle", 30); // osoite jää tyhjäksi
	Henkilo maija("Maija", 24, "Hämeenpuisto 20", "Tampere"); // Nimi, ikä ja osoite
	Opiskelija pekka("Pekka", 20, 45); // viimeinen parametri opintopisteet
	Henkilo* marja = new Henkilo("Marja", 18);
	Henkilo* henkilot[10] = {	new Henkilo("Aapo",50),
								new Henkilo("Riku",16,"Osinko","Oulu"),
								new Henkilo("Riku",16,"Osinko","Oulu"),
								new Henkilo("Maijukka",54,"Lausunto","Rovaniemi"),
								new Henkilo("Konsta",95),
								new Henkilo("Heikki",51),
								new Henkilo("Lotta",97,"Aleksanterin","Helsinki"),
								new Henkilo("Toni",65), 
								new Opiskelija("pekka",50,60),
								new Opiskelija("juhani",50,60)
		};

	for (int count = 0; count < 10; count++) {
		henkilot[count]->tulostaTiedot();
	}
	delete henkilot;
	system("pause");
	return EXIT_SUCCESS;
}

/*Kysymys: Jos osoittimen takana oleva henkilö on opiskelija, kutsutaanko tällöin henkilön vain
opiskelijan tulostaTiedot() -metodia? Miten virtual -sanan käyttö kantaluokassa metodin edessä
vaikuttaa tilanteeseen ja miksi?

Kutsutaan henkilön tulostatiedot() metodia. Virtual sanan käyttö luo funktion, mutta sitä ei voida kutsua eli kutsutaan
opiskelijan funktiota.
*/
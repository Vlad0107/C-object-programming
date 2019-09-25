#pragma once
#include<string>
using namespace std;

class Osoite
{
public:
	Osoite();
	Osoite(const string & aKatuOsoite, const string & aKunta);
	Osoite(const Osoite & aOsoite);
	~Osoite();
	void tulostaTiedot();


private:
	string katuOsoite;
	string kunta;
};


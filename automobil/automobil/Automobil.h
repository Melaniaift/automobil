#pragma once
#include <iostream>
#include <fstream>//lucreaza cu fluxuri (stream-uri)
#pragma warning(disable:4996)
using namespace std;

class Automobil{
protected:
char* marca;
char* model;
int pret;
public:
	static const int nrAxe=2;
	static char* tipAutovehicul(){
		cout<< "Automobil";
	}
	Automobil(const char* marca,const char* model,int pret);
	Automobil(const Automobil&); //constructor de copiere
	virtual ~Automobil();
	virtual void scrieInformatii(ostream& out);
	static Automobil* citesteDate();
};

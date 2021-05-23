#include "nod.cpp"
#pragma warning(disable:4996)
using namespace std;

#ifndef LISTA_D_H
#define LISTA_D_H

template<typename T>
class ListaD {
	Nod<T>* prim, * ultim;
	int nrNoduri;

public:
	ListaD();
	~ListaD();
	int daNumarNoduri() const;
	T& operator[](int) const;
	bool esteGoala() const;
	bool stergeNod(Nod<T>* nod);
	bool adaugaLaInceput(T);
	bool adaugaLaSfarsit(T);
	void stergeToateNodurile();
	template<typename T> friend ostream& operator<<(ostream&, const ListaD<T>&);

private:
	Nod<T>* creareNod(T);
	bool adaugaLaInceput(Nod<T>*);
	bool adaugaLaSfarsit(Nod<T>*);
	bool adaugaInainte(Nod<T>*, Nod<T>*);
	bool adaugaDupa(Nod<T>*, Nod<T>*);
};
#endif
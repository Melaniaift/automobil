#include "ListaD.h"

template<typename T>
ListaD<T>::ListaD() : nrNoduri(0), prim(NULL), ultim(NULL) {
	return;
}

template<typename T>
ListaD<T>::~ListaD() {
	stergeToateNodurile();
	return;
}

template<typename T>
int ListaD<T>::daNumarNoduri() const {
	return nrNoduri;
}

template<typename T>
T& ListaD<T>::operator[](int i) const {
	Nod<T>* p = prim;
	try {
		while (p) {
			if (i--)return p->info;
			p = p->next;
		}
	}
	catch (...) {}
}

template<typename T>
bool ListaD<T>::esteGoala() const {
	return nrNoduri == 0;
}

template<typename T>
bool ListaD<T>::stergeNod(Nod<T>* nod) {
	bool rez = false;
	if (nod) {
		if (nod->prev)
			nod->prev->next = nod->next;
		else
			prim = nod->next;

		if (nod->next)
			nod->next->prev = nod->prev;
		else
			ultim = nod->prev;

		delete nod;

		nrNoduri--;
		rez = true;
	}
	return rez;
}

template<typename T>
void ListaD<T>::stergeToateNodurile() {
	while (prim)
		stergeNod(prim);
	return;
}

template<typename T>
ostream& operator<<(ostream& out, const ListaD<T>& l) {
	Nod<T>* p = l.prim;
	while (p) {
		out << p->getInfo() << endl;
		p = p->Next();
	}
	return out;
}

template<typename T>
bool ListaD<T>::adaugaLaInceput(T info) {
	return adaugaLaInceput(creareNod(info));
}

template<typename T>
bool ListaD<T>::adaugaLaSfarsit(T info) {
	bool rez = false;
	Nod<T>* p = creareNod(info);
	if (p) {
		if (ultim)
			rez = adaugaDupa(ultim, p);
		else
			rez = adaugaLaInceput(p);

	}
	return rez;
}

template<typename T>
Nod<T>* ListaD<T>::creareNod(T info) {
	Nod<T>* p = new Nod<T>(info);
	p->prev = NULL;
	p->next = NULL;
	return p;
}

template<typename T>
bool ListaD<T>::adaugaLaInceput(Nod<T>* nodNou) {
	bool rez = false;
	if (nodNou) {
		if (prim) {
			rez = adaugaInainte(prim, nodNou);
		}
		else {
			prim = ultim = nodNou;
			nrNoduri++;
			rez = true;
		}
	}
	return rez;
}

template<typename T>
bool ListaD<T>::adaugaLaSfarsit(Nod<T>* nodNou) {
	bool rez = false;
	if (nodNou) {
		if (ultim)
			rez = adaugaDupa(ultim, nodNou);
		else
			rez = adaugaLaInceput(nodNou);
	}
	return rez;
}

template<typename T>
bool ListaD<T>::adaugaInainte(Nod<T>* nod, Nod<T>* nodNou) {
	bool rez = false;
	if (nod && nodNou) {
		nodNou->prev = nod->prev;
		nodNou->next = nod;
		if (nod->prev)
			nod->prev->next = nodNou;
		else
			prim = nodNou;

		nod->prev = nodNou;
		nrNoduri++;
		rez = true;
	}
	return rez;
}

template<typename T>
bool ListaD<T>::adaugaDupa(Nod<T>* nod, Nod<T>* nodNou) {
	bool rez = false;
	if (nod && nodNou) {
		nodNou->prev = nod;
		nodNou->next = nod->next;
		if (nod->next)
			nod->next->prev = nodNou;
		else
			ultim = nodNou;

		nod->next = nodNou;
		nrNoduri++;
		rez = true;
	}
	return rez;
}
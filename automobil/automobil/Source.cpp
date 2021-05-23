#include "ListaD.cpp"
#include "AutomobilHibrid.h"


int main() {
	ListaD<int> l;
	l.adaugaLaInceput(1);
	l.adaugaLaInceput(2);
	l.adaugaLaSfarsit(3);
	l.adaugaLaInceput(4);
	l.adaugaLaInceput(3);

	cout << "Lista este goala:" << (l.esteGoala() ? "DA" : "NU") << endl;
	cout << "Numar noduri:" << l.daNumarNoduri() << endl;
	cout << l << endl;
	l.stergeToateNodurile();
	cout << endl;

	ListaD<Automobil*> la;
	la.adaugaLaInceput(new AutomobilArdereInterna("Dacia","Logan", 70, 8000, 1400, "benzina", 7.7));
	la.adaugaLaInceput(new AutomobilElectric("Tesla", "Model S", 259, 100000, "LI-ION", 512));
	la.adaugaLaSfarsit(new AutomobilHibrid("Toyota", "Prius", 75, 40, 1500, "benzina", 3.3, 29000, "LI-ION", 100));

	cout << "Lista este goala:" << (la.esteGoala() ? "DA" : "NU") << endl;
	for (int i = 0; i < la.daNumarNoduri(); i++)
		la[i]->scrieInformatii(cout);
	cout << endl;
	system("pause");
	return 0;
}
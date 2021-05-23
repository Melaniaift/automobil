#include "Automobil.h"
class AutomobilElectric:virtual public Automobil{
protected:
	int putere;
	char* baterie;
	int autonomie;
public:
	AutomobilElectric(const char*,const char*,int,int,const char*,int);
	//de ce nu are trecute 
	//AutomobilArdereInterna(const char* marca, const char* model, int putere, int pret, int cc,const char* combustibil, double consum);
	
	virtual ~AutomobilElectric();
	void scrieInformatii(ostream& out);
	static Automobil* citesteDate();
};

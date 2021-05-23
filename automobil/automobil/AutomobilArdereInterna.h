#include "Automobil.h"
class AutomobilArdereInterna:virtual public Automobil{
protected:
	int putere;
	int cc;
	char* combustibil;
	double consum;
public:
	AutomobilArdereInterna(const char* marca,const char* model,int putere,int pret,int cc,const char* combustibil,double consum);
	virtual ~AutomobilArdereInterna();
	void scrieInformatii(ostream& out);
	static Automobil* citesteDate();
};

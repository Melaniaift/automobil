#include "AutomobilArdereInterna.h"
#include "AutomobilElectric.h"
class AutomobilHibrid:public AutomobilArdereInterna,public AutomobilElectric{
public:
	AutomobilHibrid(const char* marca,const char* model,int putereAI,int putereEl,int cc,const char* combustibil,double consum,int pret,const char* baterie, int autonomie);
	~AutomobilHibrid();
	void scrieInformatii(ostream& out);
	static Automobil* citesteDate();
};

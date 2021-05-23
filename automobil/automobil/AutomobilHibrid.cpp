#include "AutomobilHibrid.h"
AutomobilHibrid::AutomobilHibrid(const char* marca,const char* model,int putereAI,int putereEl,int cc,const char* combustibil,double consum,int pret,const char* baterie, int autonomie):Automobil(marca,model,pret),AutomobilArdereInterna(marca,model,putereAI,pret,cc,combustibil,consum),AutomobilElectric(marca,model,putereEl,pret,baterie,autonomie){}AutomobilHibrid::~AutomobilHibrid(){
}
void AutomobilHibrid::scrieInformatii(ostream& out){
	out<< "Automobil hibrid";
	out<< "\n\tMarca: "<<marca;
	out<< "\n\tMarca: "<<model;
	out<< "\n\tCapacitate cilindrica: "<<cc<<" cc.";
	out<< "\n\tTip combustibil: "<<combustibil;
	out<< "\n\tTip baterie: "<<baterie;
	out<< "\n\tPutere: ";
	out<< "\n\t\tMotor ardere interna: "<<AutomobilArdereInterna::putere<<" cp.";
	out<< "\n\t\tMotor electric: "<<AutomobilElectric::putere<<" cp.";
	out<< "\n\t\tTotal: "<<AutomobilArdereInterna::putere+AutomobilElectric::putere<<" cp.";
	out<< "\n\tConsum: "<<consum<<" litri/100 km.";
	out<< "\n\tPret: "<<pret<<" EUR";
	out<< "\n======================================\n";
}
Automobil* AutomobilHibrid::citesteDate(){
	char *marca=new char[20];
	char *model=new char[20];
	char *baterie=new char[10];
	char *combustibil=new char[10];
	int putereAI,putereEl,pret,autonomie,cc;
	double consum;cout<<"\nAdaugare automobil hibrid:";
	cout<<"\n\tMarca:";
	cin>>marca;
	cout<<"\n\tModel:";
	cin>>model;
	cout<<"\n\tCapacitate cilindrica (cc.):";
	cin>>cc;
	cout<<"\n\tPutere motor ardere interna:";
	cin>>putereAI;
	cout<<"\n\tCombustibil:";
	cin>>combustibil;
	cout<<"\n\tConsum (litri/100 km.):";
	cin>>consum;
	cout<<"\n\tPutere motor electric:";
	cin>>putereEl;
	cout<<"\n\tBaterie:";
	cin>>baterie;
	cout<<"\n\tAutonomie (km.):";
	cin>>autonomie;
	cout<<"\n\tPret (EUR):";
	cin>>pret;
	return new AutomobilHibrid(marca,model,putereAI,putereEl,cc,combustibil,consum,pret,baterie,autonomie);
}

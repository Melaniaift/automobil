#include "AutomobilArdereInterna.h"
AutomobilArdereInterna::AutomobilArdereInterna(const char* marca,const char* model,int putere,int pret,int cc,const char* combustibil,double consum):Automobil(marca,model,pret){
	this->putere=putere;
	this->cc=cc;
	this->combustibil = new char[strlen(combustibil) + 1]; 
	strcpy(this->combustibil, combustibil);
	this->consum=consum;
}
AutomobilArdereInterna::~AutomobilArdereInterna(){
	delete[] combustibil;
}
void AutomobilArdereInterna::scrieInformatii(ostream& out){
	out<< "Automobil ardere interna";
	out<< "\n\tMarca: "<<marca;
	out<< "\n\tMarca: "<<model;
	out<< "\n\tCapacitate cilindrica: "<<cc<<" cc.";
	out<< "\n\tTip combustibil: "<<combustibil;
	out<< "\n\tPutere: "<<putere<<" cp.";
	out<< "\n\tConsum: "<<consum<<" litri/100 km.";
	out<< "\n\tPret: "<<pret<<" EUR";
	out<< "\n======================================\n";
}
Automobil* AutomobilArdereInterna::citesteDate(){
	char *marca=new char[20];
	char *model=new char[20];
	char *combustibil=new char[10];
	int putere,pret,cc;
	double consum;
	cout<<"\nAdaugare automobil ardere interna:";
	cout<<"\n\tMarca:";
	cin>>marca;
	cout<<"\n\tModel:";
	cin>>model;
	cout<<"\n\tCapacitate cilindrica (cc.):";
	cin>>cc;
	cout<<"\n\tPutere:";
	cin>>putere;
	cout<<"\n\tCombustibil:";
	cin>>combustibil;
	cout<<"\n\tConsum (litri/100 km.):";
	cin>>consum;
	cout<<"\n\tPret (EUR):";
	cin>>pret;
	return new AutomobilArdereInterna(marca,model,putere,pret,cc,combustibil,consum);
}

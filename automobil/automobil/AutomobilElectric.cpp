#include "AutomobilElectric.h"
AutomobilElectric::AutomobilElectric(const char* marca,const char* model,int putere,int pret,const char* baterie,int autonomie):Automobil(marca,model,pret){
	this->putere=putere;
	this->baterie = new char[strlen(baterie) + 1];
	strcpy(this->baterie, baterie);
	this->autonomie=autonomie;
}
AutomobilElectric::~AutomobilElectric(){
	delete[] baterie;
}
void AutomobilElectric::scrieInformatii(ostream& out){
	out<< "Automobil electric";
	out<< "\n\tMarca: "<<marca;
	out<< "\n\tModel: "<<model;
	out<< "\n\tTip baterie: "<<baterie;
	out<< "\n\tPutere: "<<putere<<" cp.";
	out<< "\n\tAutonomie: "<<autonomie<<" km.";
	out<< "\n\tPret: "<<pret<<" EUR";
	out<< "\n======================================\n";
}
Automobil* AutomobilElectric::citesteDate(){
	char *marca=new char[20];
	char *model=new char[20];
	char *baterie=new char[10];
	int putere,pret,autonomie;
	cout<<"\nAdaugare automobil electric:";
	cout<<"\n\tMarca:";
	cin>>marca;
	cout<<"\n\tModel:";
	cin>>model;
	cout<<"\n\tPutere:";
	cin>>putere;
	cout<<"\n\tBaterie:";
	cin>>baterie;
	cout<<"\n\tAutonomie (km.):";
	cin>>autonomie;
	cout<<"\n\tPret (EUR):";
	cin>>pret;
	return new AutomobilElectric(marca,model,putere,pret,baterie,autonomie);
}

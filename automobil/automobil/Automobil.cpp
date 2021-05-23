#include "Automobil.h"
Automobil::Automobil(const char* marca,const char* model,int pret){
	if (marca) { 
		this->marca = new char[strlen(marca) + 1];
		strcpy(this->marca, marca); 
	}
	else
		marca = 0; //vectorul nul
	this->model = new char[strlen(model) + 1];
	strcpy(this->model, model);
	this->pret = pret;
}
Automobil::Automobil(const Automobil& A) { //constructor de copiere
	if (A.marca) {
		marca = new char[strlen(A.marca) + 1];
		strcpy(marca, A.marca);
	}else
		marca = 0;
	if (A.model) {
		model = new char[strlen(A.model) + 1];
		strcpy(model, A.model);
	}else
		model = 0;
	pret = A.pret;
}
Automobil::~Automobil(){
	delete[] marca;
	delete[] model;
}
void Automobil::scrieInformatii(ostream& out){
	out<< "Automobil";
	out<< "\n\tMarca: "<<marca;
	out<< "\n\tMarca: "<<model;
	out<< "\n\tPret: "<<pret<<" EUR";
	out<< "\n======================================\n";
}
Automobil* Automobil::citesteDate(){
		return 0;
}

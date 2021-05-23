#include "Nod.h"

template<typename T>
Nod<T>::Nod() : prev(NULL), next(NULL) {
	return;
}

template<typename T>
Nod<T>::Nod(T info) : prev(NULL), next(NULL) {
	this->info = info;
}

template<typename T>
Nod<T>::~Nod() {}

template<typename T>
T Nod<T>::getInfo() {
	return info;
}

template<typename T>
void Nod<T>::setInfo(T info) {
	this->info = info;
}

template<typename T>
Nod<T>* Nod<T>::Next() {
	return next;
}

template<typename T>
Nod<T>* Nod<T>::Prev() {
	return prev;
}
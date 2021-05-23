#include <iostream>
#pragma warning(disable:4996)
using namespace std;

#ifndef NOD_H //in loc de #pragma once
#define NOD_H

template<typename T>class ListaD;

template< typename T>
class Nod
{
	T info;
	Nod<T>* next, * prev;
public:
	Nod();
	Nod(T);
	~Nod();
	T getInfo();
	void setInfo(T);
	Nod<T>* Next();
	Nod<T>* Prev();
	friend class ListaD<T>;
};
#endif 
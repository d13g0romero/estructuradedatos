#include <iostream>
#include "Vector.h"
#define MAX 100

using namespace std;

int main()
{
	int tamanio, v[MAX];
	Vector vector1;
	cout << "Ingrese el numero de elementos: ";
	do {
        cin >> tamanio;
	} while (tamanio > MAX || tamanio < 0);
	vector1.set_n(tamanio);
	vector1.cargar(tamanio, v);
	vector1.mostrar(v);
		
}

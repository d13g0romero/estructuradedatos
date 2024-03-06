#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector()
{

}
Vector::~Vector()
{

}
void Vector::set_n(int _n)
{
	n = _n;
}
int Vector::get_n()
{
	return n;
}
void Vector::cargar(int _n, int _vec[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Vec [" << i << "]: ";
			cin >> _vec[i];
	}
}
int Vector::mostrar(int _vec[])
{
	for (int i = 0; i < n; i++)
		cout << "Vector: [" << i << "]=" << _vec[i] << endl;
	return 0;
}
void Vector::ordenar(int _vec[], int _vec2[])
{
	int aux;
	for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
	    {
		    if (_vec[i] > _vec[j])
		    {
			    aux = _vec[i];
			    _vec[i] = _vec[j];
			    _vec[j] = aux;
		    }
	    }
}
int Vector::promedio(int _vec[], int _n)
{
	int prom, aux = 0;
	for (int i = 0; i < _n; i++)
		aux = aux + _vec[i];
	prom = aux / _n;
	return prom;
}

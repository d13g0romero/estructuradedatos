#include "Cadenas.h"
#include <iostream>
#include <string>
using namespace std;

Cadenas::Cadenas()
{
	longitud = 0;
}
Cadenas::~Cadenas()
{

}
void Cadenas::set_cadenas(string car)
{
	cadenas = car;
	longitud = cadenas.length();
}
string Cadenas::get_cadenas()
{
	return cadenas;
}
int Cadenas::tamanio()
{
	return longitud;
}
string Cadenas::invertir(string car, string car2)
{
	int i;
	char aux;
	car2 = car;
	for (i = 0;i < longitud/2;i++)
	{
		aux = car[i];
		car[i] = car[longitud - 1 - i];
		car[longitud - 1 - i] = aux;
	}
	return car;
}
bool Cadenas::palindromo(string car, string car2)
{
	if (car2.compare(car) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
string Cadenas::sustraer(string car, int pos)
{
	return car.substr(pos, longitud - pos);
}

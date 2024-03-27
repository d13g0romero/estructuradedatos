#include <iostream>
#include <string>
using namespace std;

class Cadenas
{
private:
	int longitud;
	string cadenas;
public:
	Cadenas();
	~Cadenas();
	string get_cadenas();
	void set_cadenas(string car);
	int tamanio();
	string invertir(string car, string car2);
	bool palindromo(string car, string car2);
	string sustraer(string car, int pos);
};

#include <iostream>
#include <string>
#include "Cadenas.h"
using namespace std;

int main()
{
    int opcion, pos;
    char aux;
    string nombre, nom2;
    Cadenas can1;
    do
    {
        cout << "---Menu---" << endl;
        cout << "1. Pedir un string \n";
        cout << "2. Longitud del string \n";
        cout << "3. Invertir el string \n";
        cout << "4. Comprobar si hay palindromos \n";
        cout << "5. Sacar un substring \n";
        cout << "0. Salir \n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese un string: ";
            getline(cin, nombre);
            can1.set_cadenas(nombre);
            break;
        case 2:
            cout << "La longitud es: " << can1.tamanio();
            break;
        case 3:
            cout << "El string invertido es: " << can1.invertir(nombre, nom2);
            break;
        case 4:

            if (can1.palindromo(nombre, nom2) == true)
                 {
                     cout << "El string es un palindromo." << endl;
                 }
            else
                 {
                     cout << "El string no es un palindromo." << endl;
                 }
            break;
        case 5:
            cout << "Ingrese una posición desde la cual eliminar: ";
            cin >> pos;
            cout << "El resultado es: " << can1.sustraer(nombre, pos);
            break;
        case 0:
            cout << "Saliendo... \n";
            break;
        default:
            cout << "ELija una opcion valida. \n";
            break;
        }
        system("pause");
        system("cls");
    } 
    
    while (opcion != 0);
    return 0;
}

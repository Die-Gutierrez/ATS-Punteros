/*Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número.
Con punteros.*/
#include <iostream>

using namespace std;

int main()
{
    int num, *p;

    p =& num;

    cout<<"Digite un numero: ";
    cin>>num;
    if(num % 2 == 0)
    {
        cout<<"El numero "<<num<<" es par y su posicion de memoria es "<<&num<<endl;
    }
    else
    {
        cout<<"El numero "<<*p<<" es impar y su posicion de memoria es "<<p<<endl;
    }

    return 0;
}
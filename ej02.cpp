/*Ejercicio 2: Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria se guardo el número.*/
#include <iostream>

using namespace std;

int main()
{
    int num, *p, j=0;

    p = &num;

    cout<<"Introduzca un numero: ";
    cin>>*p;
    for(int i=1;i<=*p;i++)
    {
        if(*p%i==0) j++;
    }
    if(j < 3)
    {
        cout<<"El numero "<<*p<<" es primo, y su direccion es "<<p<<endl;
    }
    else
    {
        cout<<"El numero "<<*p<<" NO es primo, y su direccion es "<<p<<endl;
    }


    return 0;
}
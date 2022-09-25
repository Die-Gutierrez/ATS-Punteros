/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número
en particular. 
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void ordenarArr(int *, int);
void buscarArr(int *, int);

//Variables Globales.
int nElementos, *elemento;

int main()
{
    pedirDatos();
    ordenarArr(elemento, nElementos);
    buscarArr(elemento, nElementos);

    delete [] elemento;

    return 0;
}
void pedirDatos()
{
    cout<<"Total de Elementos: ";
    cin>>nElementos;
    elemento = new int[nElementos];
    for(int i=0;i<nElementos;i++)
    {
        cout<<"Introduzca un numero: ";
        cin>>elemento[i];
    }
}
void ordenarArr(int *elemento, int nElementos)
{
    int aux, pos;

    for(int i=0;i<nElementos;i++)
    {
        aux = *(elemento+i);
        pos = i;
        while((pos > 0)&&(*(elemento+pos-1) > aux))
        {
            *(elemento+pos) = *(elemento+pos-1);
            pos--;
        }
        *(elemento+pos) = aux;
    }
}
void buscarArr(int *elemento, int nElementos)
{
    int num;

    cout<<"Introduzca un numero a buscar dentro del Arreglo: ";
    cin>>num;
    for(int i=0;i<nElementos;i++)
    {
        if(*(elemento+i) == num)
        {
            cout<<"El numero que busco "<<num<<", se encuentra dentro del arreglo y en la posicion ["<<i<<"]"<<endl;
        }
    }
}

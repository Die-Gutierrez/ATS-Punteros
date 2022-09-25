/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en orden 
scendente y mostrarlos en pantalla. 
NOTA: Utilizar cualquier método de ordenamiento.*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void ordenarArr(int *, int);
void mostrarArr(int *, int);

//Variables Globales.
int nElementos, *elemento;

int main()
{
    pedirDatos();
    ordenarArr(elemento, nElementos);
    mostrarArr(elemento, nElementos);

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
    int aux, mayor=0;

    //Metodo Burbuja.
    // Primero se calcula el MAYOR elemento.
    for(int i=0;i<nElementos;i++)
    {
        if(*(elemento+i) > mayor)
            {
                mayor = *(elemento+i);
            }
    }
    // Se empieza a mover los elementos del vector
    for(int i=0;i<nElementos;i++)
    {
        for(int j=0;j<nElementos;j++)
        {
            if(*(elemento+j) > *(elemento+j+1))
            {
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
        }
        if(i == nElementos-1)
        {
            for(int j=0;j<nElementos;j++)
            {
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;
            }
            *(elemento+nElementos-1) = mayor;
        }
    }
}
void mostrarArr(int *elemento, int nElementos)
{
    cout<<"Arreglo Ordenado: "<<endl;
    for(int i=0;i<nElementos;i++)
    {
        cout<<*(elemento+i)<<", ";
    }
}

// Compilar ver y arreglar 
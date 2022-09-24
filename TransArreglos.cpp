// Transmision de Arreglos

// Ejem: Hallar el Maximo Valor de un Arreglo.

#include <iostream>
#include <stdlib.h> // Libera que contiene "new y delete".

using namespace std;

int maximoValor(int *DirVec, int nElementos);

int main()
{
    int nElementos, *arr; // Un PUNTERO solamente apunta a una Direccion de MEMORIA.

    cout<<"Total de elementos: ";
    cin>>nElementos;
    // Proceso de convertir un Puntero a un Arreglo.
    arr = new int(nElementos); // Mediante new -> se hizo una reserva de bytes
    // arr -> es un arreglo
    for(int i=0;i<nElementos;i++)
    {
        cout<<"Digite un numero ["<<i+1<<"]: ";
        cin>>arr[i];
    }
    // Se esta enviando un Arreglo, por lo tanto cumple con "Transmision de Arreglos".
    cout<<"El mayor elemento del arreglo es: "<<maximoValor(arr, nElementos);
    delete [] arr;

    return 0;
}
int maximoValor(int *DirVec, int nElementos)
{
    int max=0;

    // *DirVec, solo apunta al primer elemento del Arreglo.

    for(int i=0;i<nElementos;i++)
    {
        // Para que la operacion se haga con el valor de una variable de tipo puntero, se debe colocar siempre " *example ".
        if(*(DirVec+i) > max)
        {
            max = *(DirVec+i);
        }
    }

    return max;
}
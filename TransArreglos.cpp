// Transmision de Arreglos

// Ejem: Hallar el Maximo Valor de un Arreglo.

#include <iostream>

using namespace std;

int maximoValor(int *DirVec, int nElementos);

int main()
{
    const int nElementos = 5;
    int Arr[nElementos] = {1,2,3,4,5};

    // Al pasar un Vector a una Funcion de tipo Puntero, se pasa tanto asi "Arr" o "&Arr[0]", al final lo que se pasa es la 
    // direccion de memoria.
    // En esta llamada a la Funcion, se esta haciendo que el puntero "*DirVec" apunte al primero elemento del arreglo.
    cout<<"El valor Maximo del Vector es: "<<maximoValor(Arr, nElementos);

    return 0;
}
int maximoValor(int *DirVec, int nElementos)
{
    int max=0;

    for(int i=0;i<nElementos;i++)
    {
        // Mediante la forma de "*(DirVec)" se expresa que el PUNTERO apunta al 1er indice del arreglo.
        if(*(DirVec+i) > max)
        {
            max = *(DirVec+i);
        }
    }

    return max;
}
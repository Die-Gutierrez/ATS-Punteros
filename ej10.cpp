/*Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta. 
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarMatrizT(int **, int, int);

int nF, nC, **matriz_ori;

int main()
{
    pedirDatos();
    mostrarMatrizT(matriz_ori, nF, nC);

    // Borrar Separacion de Bytes de la Matriz Dinamica.
    for(int i=0;i<nF;i++)
    {
        delete [] *(matriz_ori+i); 
    }
    delete [] matriz_ori;


    return 0;
}
void pedirDatos()
{
    cout<<"Digite numero de filas: ";
    cin>>nF;
    cout<<"Digite numero de columnas: ";
    cin>>nC;
    //Creacion de la Matriz Dinamica.
    matriz_ori = new int *[nF];
    for(int i=0;i<nF;i++)
    {
        *(matriz_ori+i) = new int[nC];
    }
    cout<<"Rellene la Matriz: "<<endl;
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_ori+i)+j);
        }
    }
}
void mostrarMatrizT(int **matriz_o, int nF, int nC)
{
    // Imprimiendo Matriz Transpuesta
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            cout<<*(*(matriz_o+j)+i)<<" ";
        }
        cout<<endl;
    }
}

// NOTA :  Una matriz sea su origen de variable global ,funciona el cualquier parte del programa.

// NOTA IMPORTANTE: ANTES DE TRABAJAR CON LAS FUNCIONES O HERRAMIENTRAS DE UNA LIBRERIA ,DEBEMOS DECLARARLAS, SI NO LO HACEMOS
// NUESTRO IDE NO RECONOCERA TALES LINEAS Y POR LO TANTO OCURRIRA ERROR, ES IMPORTANTE HACER UNA DECLARACION PREVIA, Y SINO 
// REESCRIBIR EL CODIGO
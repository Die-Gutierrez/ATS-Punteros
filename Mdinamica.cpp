/*Matriz Dinamica

Rellenar una Matriz Dinamica NxM, y mostrar su contenido.
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarDatos(int **, int, int);

int nFil, nCol, **matriz_dinamica;

int main()
{
    pedirDatos();
    mostrarDatos(matriz_dinamica, nFil, nCol);

    // Cerrando la Separacion de Bytes
    for(int i=0;i<nFil;i++)
    {
        delete [] *matriz_dinamica[i];
    }
    delete[] matriz_dinamica;
    // .

    return 0;
}
void pedirDatos()
{
    cout<<"Digite numero de Filas: ";
    cin>>nFil;
    cout<<"Digite numero de Columnas: ";
    cin>>nCol;
    // Creacion de la Matriz Dinamica
    matriz_dinamica = new int *[nFil];
    for(int i=0;i<nFil;i++)
    {
        *(matriz_dinamica+i) = new int [nCol]; // matriz_dinamica[i] = *(matriz_dinamica+i).
    }
    // .
    // Recoleccion de datos en la Matriz Dinamica .
    for(int i=0;i<nFil;i++)
    {
        for(int j=0;j<nCol;j++)
        {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matriz_dinamica+i)+j);
        }
    }
}
void mostrarDatos(int **m_dinamica, int f, int c)
{
    for(int i=0;i<nFil;i++)
    {
        for(int j=0;j<nCol;j++)
        {
            cout<<*(*(matriz_dinamica+i)+j)<<" ";
        }
        cout<<endl;
    }
}

// NOTA : Recuerda q todo es secuencial , para que algo podamos borrar , antes debe existir y controlar eso mediante
// las funciones, el orden importa , si no creamos , no podemos borrar o no podemos borrar antes de crear, todo contrlar ese tema
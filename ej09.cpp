// Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void calSuma(int **, int **, int, int);
void mostrarDatos();

// Declaracion de Variables G.
int **pri_matriz, **sec_matriz, **r_matriz, nF, nC;

int main()
{
    pedirDatos();
    calSuma(pri_matriz, sec_matriz, nF, nC);
    mostrarDatos();

    // Borrar la separacion de bytes de la 1ra matriz.
    for(int i=0;i<nF;i++)
    {
        delete [] *(pri_matriz+i);
    }
    delete [] pri_matriz;
    // Borrar la separacion de bytes de la 2ra matriz.
    for(int i=0;i<nF;i++)
    {
        delete [] *(sec_matriz+i);
    }
    delete [] sec_matriz;
    // Borrar la separacion de bytes de la R matriz.
    for(int i=0;i<nF;i++)
    {
        delete [] *(r_matriz+i);
    }
    delete [] r_matriz;



    return 0;
}
void pedirDatos()
{
    cout<<"Digite el numero de Filas: ";
    cin>>nF;
    cout<<"Digite el numero de Columnas: ";
    cin>>nC;
    // Creacion de la 1ra Matriz Dinamica {
    pri_matriz = new int*[nF];
    for(int i=0;i<nF;i++)
    {
        *(pri_matriz + i) = new int [nC]; // *(pri_matriz + i) = pri_matriz[i].
    }
    // }
    // Creacion de la 2da Matriz Dinamica {
    sec_matriz = new int*[nF];
    for(int i=0;i<nF;i++)
    {
        *(sec_matriz + i) = new int [nC]; // *(pri_matriz + i) = pri_matriz[i].
    }
    // }
    cout<<"Rellene la Primera Matriz: "<<endl;
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            cout<<"Introduzca un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(pri_matriz +i)+j);
        }
    }
    cout<<"Rellene la Segunda Matriz: "<<endl;
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            cout<<"Introduzca un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(sec_matriz +i)+j);
        }
    }
}
// Nombre diferente del puntero que apunta a la matriz, por ser del tipo global, puede haber errores.
void calSuma(int **p_matriz, int **s_matriz, int nF, int nC)
{
    // Creacion de la Matriz Dinamica R {
    r_matriz = new int*[nF];
    for(int i=0;i<nF;i++)
    {
        *(r_matriz + i) = new int [nC]; // *(pri_matriz + i) = pri_matriz[i].
    }
    // }
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            *(*(r_matriz+i)+j) = *(*(p_matriz+i)+j) + *(*(s_matriz+i)+j);
        }
    }
}
void mostrarDatos()
{
    cout<<"Suma de Matrices: "<<endl;
    for(int i=0;i<nF;i++)
    {
        for(int j=0;j<nC;j++)
        {
            cout<<*(*(r_matriz+i)+j)<<" ";
        }
        cout<<endl;
    }
}
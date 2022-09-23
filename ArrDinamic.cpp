/* Asignacion dinamica de arreglos.

Libreria: stdlib.h
new: Reserva el numero de bytes solicitado por la "declaracion".
delete: Libera un bloque de bytes reservado con anterioridad. 

Ejemplo: Pedir al usuario n calificaciones y almacernarlos en un arreglo dinamico.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void printDatos();

int n, *calif; // Declaracion del totaldeElementos = n ; y el puntero " *calif ".
        // Este puntero " *calif " -> se convirtio en un arreglo mas abajo.
int main()
{
    pedirDatos();
    printDatos();
    delete[] calif;

    return 0;
}
void pedirDatos()
{
    cout<<"Total de calificaciones: ";
    cin>>n;
    calif = new int[n]; // Creamos el arreglo dinamico. Y Funciona de manera global este arreglo
    for(int i=0;i<n;i++)
    {
        cout<<"Introduzca un numero ["<<i+1<<"]: ";
        cin>>calif[i];
    }
}
void printDatos() // Se usa el arreglo "calif[x]" sin un paso de parametros, porque ya se declaro el puntero global.
{
    cout<<"LAS CALIFICACIONES: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"["<<i+1<<"]: "<<calif[i]<<endl;
    }
}
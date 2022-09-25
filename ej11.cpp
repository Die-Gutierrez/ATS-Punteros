/*Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, 
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos 
del alumno.
NOTA: Usar punteros a estructura*/
#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    char nombre[30];
    int edad;
    float promedio;
}alumnos[3], *pun_alumno = &alumnos[0]; // Ó *pun_alumno = alumnos

void pedirDatos();
void calPromedio(Alumno *);
void mostrarPromedio(Alumno *);

int mayor=0;

int main()
{
    pedirDatos();
    calPromedio(pun_alumno);
    mostrarPromedio(pun_alumno);

    return 0;
}
void pedirDatos()
{
    // Se Recolectan Datos a Traves de nuestro PUNTERO en un array. {
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<". Introduzca su Nombre: ";
        fflush(stdin); cin.getline((pun_alumno+i)->nombre,30,'\n');
        cout<<i+1<<". Introduzca su Edad: ";
        cin>>((pun_alumno+i)->edad);
        cout<<i+1<<". Introduzca su Promedio: ";
        cin>>((pun_alumno+i)->promedio);
        cout<<endl;
    }
    // }
}
void calPromedio(Alumno *pun_alumno)
{
    for(int i=0;i<3;i++)
    {
        if(((pun_alumno+i)->promedio) > mayor)
        {
            mayor = (pun_alumno+i)->promedio;
        }
    }
}
void mostrarPromedio(Alumno *pun_alumno)
{
    cout<<"\nDatos del Alumno con Mayor Promedio"<<endl;
    for(int i=0;i<3;i++)
    {
        if(((pun_alumno+i)->promedio) == mayor)
        {
            cout<<"Su Nombre es: "<<(pun_alumno+i)->nombre<<endl;
            cout<<"Su Edad es: "<<(pun_alumno+i)->edad<<endl;
            cout<<"Su Promedio es: "<<(pun_alumno+i)->promedio<<endl;
        }
    }
}
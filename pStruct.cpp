// Punteros a Estructuras

#include <iostream>

using namespace std;

struct personas
{
    char nombre[30];
    int edad;
}persona, *puntero_persona = &persona;

void pedirDatos();
void mostrarDatos(personas *);

int main()
{   
    pedirDatos();
    mostrarDatos(puntero_persona);

    return 0;
}
void pedirDatos()
{
    cout<<"Su nombre: ";
    fflush(stdin); cin.getline(puntero_persona->nombre,30,'\n'); // O cin.getline(persona.nombre,30,'\n')
    cout<<"Su edad: ";
    cin>>puntero_persona->edad;
}
void mostrarDatos(personas *puntero_persona)
{
    cout<<"\nNombre: "<<puntero_persona->nombre<<endl;
    cout<<"Edad: "<<puntero_persona->edad<<endl;
}
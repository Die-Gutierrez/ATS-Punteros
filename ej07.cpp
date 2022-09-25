/*Pedir su nombre al usuario y devolver el número de vocales que hay. 
NOTA: Recuerda que debes utilizar punteros.*/
#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
int contVocales(char *);

char nombre[30];

int main()
{
    pedirDatos();
    cout<<"La cantidad de vocales en la palabra es: "<<contVocales(nombre);

    return 0;
}
void pedirDatos()
{
    cout<<"Introduzca su nombre: ";
    fflush(stdin); cin.getline(nombre,30,'\n');

    strupr(nombre); // Convertimos el nombre en MAYUSCULA.
}
int contVocales(char *name)
{
    int cont=0;

    while(*name)
    {
        switch (*name)
        {
            // De esta manera cuando entra en uno, si o si se contabiliza, porque lo que rompe la linea es el "break".
            case 'A' : 
            case 'E' : 
            case 'I' : 
            case 'O' : 
            case 'U' : cont++;
        }
        name++;
    }
    return cont;
}
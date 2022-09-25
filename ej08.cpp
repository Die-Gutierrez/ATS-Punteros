/*Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u;
en la cadena de caracteres.
NOTA: Usar punteros.*/
#include <iostream>
#include <string.h>

using namespace std;

void pedirDatos();
void contVocales(char *);

char nombre[30];

int main()
{
    pedirDatos();
    contVocales(nombre);

    return 0;
}
void pedirDatos()
{
    cout<<"Su nombre: ";
    fflush(stdin); cin.getline(nombre,30,'\n');
    strupr(nombre);
}
void contVocales(char *name)
{
    int a=0, e=0, i=0, o=0, u=0;

    while(*name) // Hasta que finalize la cadena y llegue al '\0'
    {
        switch(*name)
        {
            case 'A' : a++;
            break;
            case 'E' : e++;
            break;
            case 'I' : i++;
            break;
            case 'O' : o++;
            break;
            case 'U' : u++;
            break;
        }
        name++;
    }
    cout<<"Aparece la vocal 'a' "<<a<<" veces."<<endl;
    cout<<"Aparece la vocal 'e' "<<e<<" veces."<<endl;
    cout<<"Aparece la vocal 'i' "<<i<<" veces."<<endl;
    cout<<"Aparece la vocal 'o' "<<o<<" veces."<<endl;
    cout<<"Aparece la vocal 'u' "<<u<<" veces."<<endl;

}

// Es lo mismo i++ por valor, o &i++ por memoria
// Transmision de Direcciones.

// Paso de parametros de tipo puntero.

// Ejemplo: Intercambiar el valor de 2 variables. 

#include <iostream>

using namespace std;

void interCambio(float *, float *);

int main()
{   
    float n1 = 5.1 ,n2 = 15.6;

    cout<<"Primer Numero: "<<n1<<endl;
    cout<<"Segundo Numero: "<<n2<<endl;
    interCambio(&n1,&n2); // Se pasa las DIRECCIONES de memoria de las variables.
    cout<<"\nIntercambio de valores"<<endl;
    cout<<"Nuevo Valor del primer numero: "<<n1<<endl;
    cout<<"Nuevo Valor del segundo numero: "<<n2<<endl;

    return 0;
}
void interCambio(float *num1, float *num2) // Funcion que cambia SOLO el Valor de las variables.
{
    float aux;
    // Aqui se hace el cambio del valor de la variable.
    aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}
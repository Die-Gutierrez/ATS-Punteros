//Correspondencia entre Arrays y punteros
#include <iostream>

using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5};
    int *dir_numero;

    dir_numero = numeros; // O p = &A[0] , es lo mismo en caso de arreglos

    //NOTA: No puede imprimir tanto el "valor del elemento al q apunta" como la "direccion de memoria" en un bloque, xk salta error
    //Bien uno o el otro con puntero, y el otro hacerlo con la variable real.
    for(int i=0;i<5;i++)
    {
        cout<<"El numero "<<*dir_numero++<<" esta almacenado en la direccion "<<&numeros[i]<<endl;
    }
}
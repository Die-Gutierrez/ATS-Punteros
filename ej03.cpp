/*Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números pares y 
su posición en memoria.*/
#include <iostream>

using namespace std;

int main()
{
    int A[10];
    int *pun;
    
    cout<<"\n\tRELLENE EL ARREGLO"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>A[i];
    }
    pun = A; // Se empezo apuntar al Array.
    for(int i=0;i<10;i++)
    {
        if(*pun%2==0) // Se puede usar punteros tanto en estructuras de condicion
        {
            cout<<"El numero "<<*pun<<" es par y su direccion es "<<pun<<endl; // Imprime de manera correcta.
        }
        pun++; // Se pasa a la siguiente componente del arreglo.
    }
    return 0;
}
/*Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números pares y 
su posición en memoria.*/
#include <iostream>

using namespace std;

int main()
{
    int A[10], B[10], j=0;
    int *pun;
    
    cout<<"\n\tRELLENE EL ARREGLO"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>A[i];
        if(A[i]%2==0)
        {
            B[j] = A[i];
            j++;
        }
    }
    pun = B;
    for(int i=0;i<j;i++)
    {
        cout<<"El numero "<<*pun++<<" es par, y su direccion de memoria es "<<&B[i]<<endl;
    }


    return 0;
}
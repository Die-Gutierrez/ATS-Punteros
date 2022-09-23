/*Ejercicio 4: Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.*/
#include <iostream>

using namespace std;

int main()
{
    int A[20], n;
    int *p, menor;

    p = &menor;

    cout<<"Total de elementos: ";
    cin>>n;
    cout<<"\n\tRELLENE EL ARREGLO"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Digite un numero ["<<i<<"]: ";
        cin>>A[i];
    }
    menor = A[0];
    for(int i=0;i<n;i++)
    {
        if(A[i] < menor)
        {
            menor = A[i];
        }
    }
    cout<<"El menor elemento del vector es: "<<*p<<endl;



    return 0;
}
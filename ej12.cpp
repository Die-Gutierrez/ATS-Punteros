/*Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa. 
La estructura debe tener tres campos: horas, minutos y segundos.  Escriba un programa que dado 3 etapas calcule el 
tiempo total empleado en correr todas
las etapas.
NOTA: Usar punteros.*/
#include <iostream>

using namespace std;

struct tiempo
{
    int horas;
    int minutos;
    int segundos;
}etapas[3], *pun_etapas = etapas;

void pedirDatos();
void calTiempo(tiempo *);
void mostrarR();

int sec=0, mini =0, hour =0;

int main()
{
    pedirDatos();
    calTiempo(pun_etapas);
    mostrarR();


    return 0;
}
void pedirDatos()
{
    cout<<"Ingresando Datos..."<<endl;
    cout<<"****************************"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<".Etapa, digite las horas: ";
        cin>>(pun_etapas+i)->horas;
        cout<<i+1<<".Etapa, digite los minutos: ";
        cin>>(pun_etapas+i)->minutos;
        cout<<i+1<<".Etapa, digite los segundos: ";
        cin>>(pun_etapas+i)->segundos;
        cout<<endl;
    }
    cout<<"****************************"<<endl;
}
void calTiempo(tiempo *pun_etapas)
{
    for(int i=0;i<3;i++)
    {
        sec += (pun_etapas+i)->segundos;
        mini += (pun_etapas+i)->minutos;
        hour += (pun_etapas+i)->horas;
    }
    mini += (sec / 60);
    sec = (sec % 60);
    hour += (mini / 60);
    mini = (mini % 60);
}
void mostrarR()
{
    cout<<"El tiempo que Tardo el ciclista es: "<<endl;
    cout<<"Horas: "<<hour<<endl;
    cout<<"Minutos: "<<mini<<endl;
    cout<<"Segundos: "<<sec<<endl;
}
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;

double maximo(double[], int);

bool esNumeroFloat(double numero) {
    stringstream ss;
    ss << numero;
    string str = ss.str();

    // Intenta convertir la cadena a un número float
    float resultado;
    stringstream(str) >> noskipws >> resultado;

    // Comprueba si la conversión fue exitosa y si no quedan caracteres
    return !str.empty() && str.find_first_not_of("0123456789.-") == string::npos && resultado == numero;
}


int main()
    {
    double num[10], nummax;
    cout<<"ingrese 10 numeros por teclado para el array"<<endl;
    int i=0;
    while(i<10)
        {
        do
        {
        cin>>num[i];
        i++;
        }while(esNumeroFloat(num[i]));
        }
    nummax=maximo(num,10);
    cout<<"el mayor numero de la lista es: "<<nummax<<endl;
    }

double maximo(double numero[], int i)
    {
    int j;
    double numax;
    numax=numero[0];
    for(j=1;j<i;j++)
        {
        if(numero[j]>numax)numax=numero[j];
        }
    return numax;
    }


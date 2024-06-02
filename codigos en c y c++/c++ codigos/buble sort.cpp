#include <stdio.h>

void acomodar(double lista[],int n)
    {
    int j, i;
    double aux;
    for(i=0;i<n;i++)
        {
        for(j=0;j<n-i-1;j++)
            {
            if(lista[j]>lista[j+1])
                {
                aux=lista[j+1];
                lista[j+1]=lista[j];
                lista[j]=aux;
                }
            }
        }
    }

void escribir(double lista[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        scanf("%lf",&lista[i]);
    acomodar(lista,10);

    mostrar(lista,10);
    }

void mostrar(double lista[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        printf("el numero %d de la lista es %g\n",i+1,lista[i]);
    }

int main()
    {
    double lista[10];
    printf("ingrese una lista de 10 numeros\n");
    escribir(lista,10);
    acomodar(lista,10);
    mostrar(lista,10);
    return 0;
    }

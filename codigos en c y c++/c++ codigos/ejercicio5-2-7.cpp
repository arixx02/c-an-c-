#include <stdio.h>


int detectaceros(int[],int);
int capicuastriples(int[],int);
int capicuasquintuples(int[],int);
void ingreso(int[]);

int main()
    {
    int lista[5], triples=0, quintuples=0,i;
    printf("ingresa los numeros (ingrese 5 ceros para terminar)\n");
    ingreso(lista);
    while (!detectaceros(lista,5))
        {
        triples+=capicuastriples(lista,5);
        quintuples+=capicuasquintuples(lista,5);
        ingreso(lista);
        }
    printf("los quintetos que formaron capicuas triples son %d y los que formaron capicuas quintuples son %d",triples,quintuples);
    return 0;
    }

void ingreso(int lista[])
    {
    int i;
    for(i=0;i<5;i++)
            {
            do{scanf("%d",&lista[i]);}while(lista[i]<0 || lista[i]>9);
            }
    }

int detectaceros(int lista[],int n)
    {
    int i,j=0;
    for(i=0;i<n;i++)
        j+=lista[i];
    if(j>0)return 0;
     else return 1;
    }
int capicuastriples(int lista[],int n)
    {
    int i,j=0;
    for(i=0;i<n;i++)
        {
        if(lista[i]==lista[i+2])return 1;
            else return 1;
        }
    }
int capicuasquintuples(int lista[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        if(lista[i]!=lista[n-1-i])return 0;
    return 1;
    }

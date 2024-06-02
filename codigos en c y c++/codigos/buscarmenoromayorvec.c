#include <stdio.h>
#include <stdlib.h>

int buscarmenoromayor(float[],int,int);
int busqueda(float[],float,int);

int main()
    {
    float vec[10]={0};
    int i,j;
    for(i=0;i<10;i++)
        {
        printf("%.2f ",vec[i]);
        }
    for(i=0;i<10;i++)
        {
        do
            {
            if(busqueda(vec,vec[i],i)==i)printf("\nmetiste un numero repetido salame");
            printf("\ningresa el valor en la posicion %d: ",i+1);
            scanf("%f",&vec[i]);
            }while(busqueda(vec,vec[i],i)==i);
        for(j=0;j<10;j++)
            {
            printf("%.2f ",vec[j]);
            }
        }
    int minpos=buscarmenoromayor(vec,10,0);
    int maxpos=buscarmenoromayor(vec,10,1);
    printf("\nel menor valor es %.2f y esta en la posicion %d",vec[minpos],minpos+1);
    printf("\nel mayor valor es %.2f y esta en la posicion %d",vec[maxpos],maxpos+1);
    return 0;
    }

int busqueda(float v[],float elem, int n)
    {
    int i=0,pos=-1;
    while(i<n && pos==-1)
        {
        if(elem==v[i])pos=i;
            else i++;
        }
    return pos;
    }

int buscarmenoromayor(float v[],int n,int par)
    {
    int pos=0,i,j;
    float min=v[0],max=v[0];
    if(par==0)
        {
        for(i=0;i<n;i++)
            {
            if(v[i]<min)
                {
                pos=i;
                min=v[i];
                }
            }
        }
        else
            {
                for(i=0;i<n;i++)
                {
                if(v[i]>max)
                    {
                    max=v[i];
                    pos=i;
                    }
                }
            }
    return pos;
    }

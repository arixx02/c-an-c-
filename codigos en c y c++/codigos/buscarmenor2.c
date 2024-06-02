#include <stdio.h>

int buscarmenor(float[],int);
void cargavector(float[],int);

int main()
    {
    int posmin;
    float vec[4];
    cargavector(vec,4);
    posmin=buscarmenor(vec,4);
    printf("el menor valor es %.2f y esta en la posicion %d",vec[posmin],posmin+1);
    return 0;
    }

void cargavector(float vec[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        {
        scanf("%f",&vec[i]);
        }
    }

int buscarmenor(float vec[],int n)
    {
    int i,min=vec[0],pos=0;
    for(i=0;i<n-1;i++)
        {
        if(min>vec[i+1])
            {
            min=vec[i+1];
            pos=i+1;
            }
        }
    return pos;
    }

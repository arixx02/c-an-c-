#include <stdio.h>
#include <stdlib.h>

int buscarmenoromayor(float[],int,int);

int main()
    {
    float vec[3]={1,1,1};
    int posmax,posmin;
    posmax=buscarmenoromayor(vec,3,1);
    posmin=buscarmenoromayor(vec,3,0);
    printf("el menor numero esta en la posicion %d y es %.2f\n",posmin+1,vec[posmin]);
    printf("el mayor numero esta en la posicion %d y es %.2f\n",posmax+1,vec[posmax]);
    system("pause");
    return 0;
    }

int buscarmenoromayor(float v[],int n,int par)
    {
    float min=v[0],max=v[0];
    int pos=0, i;
    if(par==1)
        {
        for(i=0;i<n-1;i++)
            {
            if(max<v[i+1])
                {
                max=v[i+1];
                pos=i+1;
                }
            }
        }
    if(par==0)
        {
        for(i=0;i<n-1;i++)
            {
            if(min>v[i+1])
                {
                min=v[i+1];
                pos=i+1;
                }
            }
        }
    return pos;
    }

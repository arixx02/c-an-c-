#include <stdio.h>

int buscarmenor(float[],int);
void cargavector(float[],int);

int main()
    {
    int i=0, edad,vec_edad[100],j;
    printf("ingrese una edad(entero): ");
    scanf("%d",&edad);
    while(edad!=0 && i<100)
        {
        vec_edad[i]=edad;
        i++;
        printf("ingrese una edad(entero): ");
        scanf("%d",&edad);
        }
    printf("edades ingresadas\n");
    for(j=0;j<i;j++)
        {
        if(j==i-1)printf("%d",vec_edad[j]);
            else printf("%d, ",vec_edad[j]);
        }
    }

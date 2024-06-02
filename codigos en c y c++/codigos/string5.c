#include <stdio.h>
#include <string.h>

int main()
    {
    char frase1[10],frase2[10];
    printf("ingrese la primera frase: ");
    gets(frase1);
    printf("ingrese la segunda frase: ");
    gets(frase2);
    if(strcmp(frase1,frase2)==0)
        printf("son iguales");
    if(strcmp(frase1,frase2)<0)
        printf("frase 2 es mayor");
    if(strcmp(frase1,frase2)>0)
        printf("frase 1 es mayor");
    return 0;
    }

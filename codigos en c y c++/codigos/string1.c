#include <stdio.h>

int main()
    {
    char nombre[50],texto[70]="el nombre es:";
    printf("ingrese un nombre: ");
    scanf("%s",nombre);
    strcat(texto,nombre);
    puts(texto);
    return 0;
    }

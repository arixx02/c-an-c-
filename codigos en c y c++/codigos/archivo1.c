#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
 char nombre[20];
 char apellido[40];
}datos;
int main ()
{
FILE *fp;
int i;
datos lista1[2], lista2[2];
for(i=0;i<2;i++)
    {
    fflush(stdin);
    do
        {
        gets(lista1[i].nombre);
        }while(strlen(lista1[i].nombre)>5);
    fflush(stdin);
    }
//Suponemos que lista1 ya contiene datos.
if ( (fp = fopen("fich.dat", "wb")) == NULL )
{
printf("No se puede abrir.\n");
getch(); exit(1);
}
//Escribe 30 registros desde el array lista1.
for ( i = 0; i < 2; i++)
fwrite(&lista1[i],sizeof(datos),1,fp);
fclose(fp);
if ( (fp = fopen("fich.dat", "rb")) == NULL )
{
printf("No se puede abrir.\n");
getch(); exit(1);
}
//Lee 30 registros, dejándolos en el array lista2.
for ( i = 0; i < 2; i++)
fread(&lista2[i], sizeof(datos),1,fp);
fclose(fp);
return 0;
}

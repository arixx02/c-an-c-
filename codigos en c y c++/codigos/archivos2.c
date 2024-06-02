#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct FECHA
{
int Dia;
int Mes;
int Anio;
};
struct PERSONA
{
long int DNI;
char ApellNombre[41];
char Sexo;
struct FECHA Nacimiento;
};
void DatosAlumnos (struct PERSONA []);//Prototipo de la función
int main()
{
struct PERSONA Alumnos[50];
int i;
FILE *pf;
pf = fopen("DatosAlumnosUNLaM.dat", "rb");
if (pf==NULL)
{
 printf(“No se pudo abrir el archivo.”);
 getch();
 exit (1);
}
for(i=0 ; i < 50; i++)
{
fread(&Alumnos[i], sizeof(struct PERSONA), 1, pf);
//Aquí la función que permite recuperar (leer) un registro a la vez en un
archivo binario.
}
DatosAlumnos ( Alumnos );// Llamada de la función
fclose(pf);
return 0;
}

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int cod;
    char desc[26];
    int cant;
}juguetes;


int main()
{
int i;
FILE *pf;
juguetes v[10]={
                {123,"uno",51},
                {456,"dos",53},
                {101112,"tres",131415},
                {161718,"cuatro",192021},
                {222324,"cinco",262728},
                {293031,"seis",323334},
                {353637,"siete",383940},
                {414243,"ocho",444546},
                {474849,"nueve",505152},
                {535455,"diez",565758}
               };
pf=fopen("juguetes.dat","wb");
if(pf==NULL)
    {
    printf("error de apertura\n");
    getch();
    exit(1);
    }
for(i=0;i<10;i++)
    {
    fwrite(&v[i],sizeof(juguetes),1,pf);
    }
fclose(pf);
return 0;
}

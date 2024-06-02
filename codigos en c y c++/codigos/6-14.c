#include <stdio.h>

int diasdelmes(int,int);
int esbisiesto(int);
int esfechavalida(int,int,int);
void calcularedad(int,int,int,int,int,int);

int main()
    {
    int dia, mes, anio, dia2, mes2, anio2;
    do
        {
        printf("ingrese la fecha actual: ");
        scanf("%d",&dia);
        scanf("%d",&mes);
        scanf("%d",&anio);
        if(esfechavalida(dia,mes,anio)==0)printf("\nfecha invalida.\n");
        }while(esfechavalida(dia,mes,anio)==0);
    printf("fecha ingresada es: %d/%d/%d",dia,mes,anio);
    do
        {
        printf("\ningrese la fecha de nacimiento: ");
        scanf("%d",&dia2);
        scanf("%d",&mes2);
        scanf("%d",&anio2);
        if(esfechavalida(dia2,mes2,anio2)==0)printf("\nfecha invalida.\n");
        }while(esfechavalida(dia2,mes2,anio2)==0);
    printf("fecha ingresada es: %d/%d/%d",dia2,mes2,anio2);
    calcularedad(dia,mes,anio,dia2,mes2,anio2);
    return 0;
    }

int esfechavalida(int dia, int mes, int anio)
    {
    int band=0;
    if(dia<=diasdelmes(mes,anio) && dia>=1)band=1;
    if(mes<1 || mes>12)band=0;
    if(anio<1582)band=0;
    return band;
    }

int diasdelmes(int mes,int anio)
    {
    int dias;
    if(mes==1 || mes==3 || mes==5 || mes==7 ||  mes==8 || mes==10 || mes==12)dias=31;
        else if(mes==2)
            {
            dias=28+esbisiesto(anio);
            }
            else dias=30;
    return dias;
    }

int esbisiesto(int anio)
    {
    int band=0;
    if(anio%4==0)
        {
        if(anio%100==0)
            {
            if(anio%400==0)band=1;
            }
            else band=1;
        }
    return band;
    }


void calcularedad(int dia,int mes,int anio,int dia2,int mes2,int anio2)
    {
    int edad;
    if(anio2>anio || anio2==anio && mes2>mes || anio2==anio && mes2==mes && dia2>dia)printf("\nfecha de nacimiento invalida");
        else
        {
        edad+=anio-anio2-1;
        if(mes>mes2)edad++;
        if(mes==mes2)
            if(dia>dia2)edad++;
        printf("\nla edad de la persona es: %d",edad);
        }
    }

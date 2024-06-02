#include <stdio.h>

int diasdelmes(int,int);
int esbisiesto(int);
int esfechavalida(int,int,int);

int main()
    {
    int dia, mes, anio;
    scanf("%d",&dia);
    scanf("%d",&mes);
    do
        {
        scanf("%d",&anio);
        }while(anio<1582);
    if(esfechavalida(dia,mes,anio)==1)printf("es fecha valida");
        else printf("fecha invalida");
    return 0;
    }

int esfechavalida(int dia, int mes, int anio)
    {
    int band=0;
    if(dia<=diasdelmes(mes,anio) && dia>=1)band=1;
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

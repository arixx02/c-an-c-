#include <stdio.h>

int diasdelmes(int,int);
int esbisiesto(int);
int esfechavalida(int,int,int);
int leeryvalidar(int,int);
void sumarundia(int,int,int);

int main()
    {
    int dia, mes, anio;
    do
        {
        printf("ingrese una fecha: ");
        scanf("%d",&dia);
        scanf("%d",&mes);
        scanf("%d",&anio);
        if(esfechavalida(dia,mes,anio)==0)printf("\nfecha invalida.\n");
        }while(esfechavalida(dia,mes,anio)==0);
    printf("fecha ingresada es: %d/%d/%d",dia,mes,anio);
    sumarundia(dia,mes,anio);
    return 0;
    }

void sumarundia(int dia,int mes,int anio)
    {
    dia=dia+1;
    if(dia>diasdelmes(mes,anio))
        {
        mes++;
        dia=1;
        }
    if(mes>12)
        {
        anio++;
        mes=1;
        }
    printf("\ndespues de un dia la fecha es: %d/%d/%d",dia,mes,anio);
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

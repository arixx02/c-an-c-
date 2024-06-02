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

int busqueda(juguetes[],int,int);
int leeryvalidar(int,int);
void generararch(juguetes[],int);

int main()
    {
    juguetes tabla[32000],reg;
    int i=0,cant_prod,pos,codigo,zona,cont_totales=0,cont_rechazados=0,cont_hombres=0,cont_mujeres=0,ventas_zona[1000]={0};
    float porcentaje_rechazados,porcentaje_h,porcentaje_m;
    char sexo,nombre[31],direc[41];
    FILE *arch;
    arch=fopen("juguetes.dat","rb");
    if(arch==NULL)
        {
        printf("error de apertura\n");
        getch();
        exit(1);
        }
    fread(&reg,sizeof(juguetes),1,arch);
    while(!feof(arch) && i<32000)
        {
        tabla[i]=reg;
        i++;
        fread(&reg,sizeof(juguetes),1,arch);
        }
    cant_prod=i;
    fclose(arch);
    for(i=0;i<10;i++)
    {
    printf ("el codigo %d con descripcion %s vendio %d\n",tabla[i].cod,tabla[i].desc,tabla[i].cant);
    }
    printf("ingrese cod de juguete (0 para finalizar): ");
    scanf("%d",&codigo);
    while(codigo!=0)
        {
        cont_totales++;
        pos=busqueda(tabla,codigo,cant_prod);
        if(pos!=-1 && tabla[pos].cant>0)
            {
            printf("ingrese nombre: ");
            fflush(stdin);
            fgets(nombre,31,stdin);
            printf("ingrese direccion: ");
            fflush(stdin);
            fgets(direc,41,stdin);
            fflush(stdin);
            printf("ingrese zona: ");
            zona=leeryvalidar(1,1000);
            printf("ingrese sexo: ");
            do
                {
                fflush(stdin);
                scanf("%c",&sexo);
                fflush(stdin);
                sexo=toupper(sexo);
                }while(sexo!='M' && sexo!='H');
            if(sexo=='M')cont_mujeres++;
                else cont_hombres++;
            tabla[pos].cant-=1;
            if(tabla[pos].cant<30)
                printf("se debe reponer el juguete %d",tabla[pos].cod);
            ventas_zona[zona-1]++;
            }
            else
                {
                cont_rechazados++;
                printf("codigo inexistente o producto sin stock\n");
                }
        printf("ingrese codigo de juguete (0 para finalizar): ");
        scanf("%d",&codigo);
        }
    porcentaje_m=(cont_mujeres/cont_totales)*100.0;
    porcentaje_h=(cont_hombres/cont_totales)*100.0;
    porcentaje_rechazados=(cont_rechazados/cont_totales)*100.0;
    printf("porcentaje de mujeres %.2f\n",porcentaje_m);
    printf("porcentaje de hombres %.2f\n",porcentaje_h);
    printf("porcentaje de rechazados %.2f\n",porcentaje_rechazados);
    generararch(tabla,cant_prod);
    return 0;
    }

int busqueda(juguetes v[],int elem,int cant)
    {
    int i,pos=-1;
    while(i<cant && pos==-1)
        {
        if(v[i].cod==elem)
            pos=i;
            else i++;
        }
    return pos;
    }

void generararch(juguetes v[],int cant)
    {
    int i;
    FILE *arch;
    arch=fopen("juguetes2.dat","wb");
    if(arch==NULL)
        {
        printf("error de apertura\n");
        getch();
        exit(1);
        }
    for(i=0;i<cant;i++)
        {
            if(v[i].cant<50)
            {
            fwrite(&v[i],sizeof(juguetes),1,arch);
            }
        }
    fclose(arch);
    }

int leeryvalidar(int linf, int lsup)
    {
    int n;
    do
        {
        scanf("%d",&n);
        }while(n<linf || n>lsup);
    return n;
    }

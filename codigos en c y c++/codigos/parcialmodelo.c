#include <stdio.h>
#include <stdlib.h>

int leeryvalidar(int,int);
void ordenamiento(float[],float[],int);

int main()
    {
    float mat[110][12]={{0}},horas,mayorleg,leg9[12],mayormes,horas_mes[12]={0},horas_leg[110]={0};
    int leg,mes,meses[12],maxposleg=0,maxposmes=0,i,j;
    for(i=0;i<12;i++)
        {
        meses[i]=i+1;
        }
    printf("ingrese legajo (111 para terminar): ");
    leg=leeryvalidar(1,111);
    while(leg!=111)
        {
        printf("ingrese mes: ");
        mes=leeryvalidar(1,12);
        printf("ingrese cantidad de horas trabajadas: ");
        do
            {
            scanf("%f",&horas);
            }while(horas<0);
        mat[leg-1][mes-1]+=horas;
        printf("ingrese legajo (111 para terminar): ");
        leg=leeryvalidar(1,111);
        }
    for(i=0;i<110;i++)
        {
        for(j=0;j<12;j++)
            {
            horas_leg[i]+=mat[i][j];
            }
        }
    for(i=0;i<12;i++)
        {
        for(j=0;j<110;j++)
            {
            horas_mes[i]+=mat[j][i];
            }
        }
    for(i=0;i<12;i++)
        {
        leg9[i]=mat[8][i];
        }
    ordenamiento(leg9,meses,12);
    mayormes=horas_mes[0]; mayorleg=horas_leg[0];
    for(i=0;i<109;i++)
        {
        if(mayorleg<horas_leg[i+1])
            {
            mayorleg=horas_leg[i+1];
            maxposleg=i+1;
            }
        }
    for(i=0;i<11;i++)
        {
        if(mayormes<horas_mes[i+1])
            {
            mayormes=horas_mes[i+1];
            maxposmes=i+1;
            }
        }
    printf("horas trabajadas por cada mes\n");
    for(i=0;i<12;i++)
        printf("mes:%d\thoras:%.2f\n",i+1,horas_mes[i]);
    printf("operario legajo %d trabajo el maximo de %.2f horas\n",maxposleg+1,mayorleg);
    printf("mayor hora por mes: %.2f\n",mayormes);
    for(i=0;i<12;i++)
        {
        if(mayormes==horas_mes[i])
            printf("el mes %d trabajo el maximo de %.2f horas\n",i+1,mayormes);
        }
    for(i=0;i<110;i++)
        {
        if(mayorleg==horas_leg[i])
            printf("el operario legajo %d trabajo el maximo de %.2f horas\n",i+1,mayorleg);
        }
    printf("\tlegajo numero 9");
    printf("\n\tmes\t\tcantidad de horas\n");
    for(i=0;i<12;i++)
        {
        printf("\t%d\t\t%.2f\n",meses[i],leg9[i]);
        }//hasta aca es todo de parcial, lo de abajo son agregados personales para ver la tabla completa (el system y el return son de parcial)
    printf("Tabla completa\n\t");
    for(i=0;i<12;i++)
        {
        printf(" %d  ",i+1);
        }
    printf("\n");
    for(i=0;i<110;i++)
        {
        printf("%d ",i+1);
        for(j=0;j<12;j++)
            {
            printf("%.2f ",mat[i][j]);
            }
        printf("\n");
        }
    system("pause");
    return 0;
    }

int leeryvalidar(int linf,int lsup)
    {
    int n;
    do
        {
        scanf("%d",&n);
        }while(n<linf || n>lsup);
    return n;
    }

void ordenamiento(float v[],float v2[],int n)
    {
    int i,j;
    float aux,aux2;
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-1-i;j++)
            {
            if(v[j]>v[j+1])
                {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
                aux2=v2[j];
                v2[j]=v2[j+1];
                v2[j+1]=aux2;
                }
            }
        }
    }

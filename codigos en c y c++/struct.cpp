#include <stdio.h>

typedef struct
    {
    char nombres[11];
    int notas;
    }notas;

int main()
    {
    int i;
    notas clase[5];
    for(i=0;i<1;i++)
        {
        printf("ingresa nombre del alumno:");
        scanf("%s",&clase[i].nombres);
        printf("ingresa la nota:");
        scanf("%d",&clase[i].notas);
        }
        printf("nombres    notas\n");
    for(i=0;i<1;i++)
        {
        printf("%s    %d\n",clase[i].nombres,clase[i].notas);
        }
    return 0;
    }

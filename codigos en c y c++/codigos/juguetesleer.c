#include <stdio.h>
#include <conio.h>
#include <windows.h>
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
    FILE *pf, *archivo_texto;
    juguetes a;
    int i;
    juguetes v[10];
    pf=fopen("juguetes.dat","rb");
    if(pf==NULL)
        {
        printf("error de apertura\n");
        getch();
        exit(1);
        }
    for(i=0;i<10;i++)
    {
    fread(&v[i],sizeof(juguetes),1,pf);
    }
    fclose(pf);
    for(i=0;i<10;i++)
    {
    printf ("el codigo %d con descripcion %s vendio %d\n",v[i].cod,v[i].desc,v[i].cant);
    }
     // Abre el archivo binario en modo lectura binaria
    pf = fopen("juguetes.dat", "rb");
    if (pf == NULL) {
        printf("Error al abrir el archivo binario\n");
        return 1;
    }

    // Abre un nuevo archivo de texto en modo escritura de texto
    archivo_texto = fopen("juguetes.txt", "w");
    if (archivo_texto == NULL) {
        printf("Error al abrir el archivo de texto\n");
        fclose(pf);
        return 1;
    }

    // Lee cada registro del archivo binario y escribe sus campos en el archivo de texto
    while (fread(&a, sizeof(juguetes), 1, pf) == 1) {
        fprintf(archivo_texto, "Código: %d, Descripción: %s, Cantidad: %d\n", a.cod, a.desc, a.cant);
    }

    // Cierra ambos archivos
    fclose(pf);
    fclose(archivo_texto);

    printf("Archivo binario convertido a texto correctamente\n");

    return 0;
}

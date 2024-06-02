#include <stdio.h>
#include <string.h>

int main()
    {
    char frase[10];
    int i,acumesp=0,acumpal=0;
    fgets(frase,10,stdin);
    puts(frase);
    for(i=0;i<strlen(frase);i++)
        {
        if(frase[i]==' ')acumesp++;
        if(frase[i]!=' ' && acumesp>0)
            {
            acumpal++;
            acumesp=0;
            }
        }
    printf("la frase tiene %d palabras",acumpal+1);
    return 0;
    }


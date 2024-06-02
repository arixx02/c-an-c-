#include <stdio.h>

void mayormenor(int,int,int,int);
int leeryvalidar(int,int);

int main()
    {
    int num,num1,num2, cont=0, acum96=0, acum97=0,acum98=0;
    while(acum96<3 && acum97<3 && acum98<3)
        {
        num=leeryvalidar(0,99);
        if(cont==0)num1=num;
        if(cont==1)num2=num;
        if(num==96)acum96++;
        if(num==97)acum97++;
        if(num==98)acum98++;
        cont++;
        if(cont==3)
            {
            mayormenor(num,num1,num2,0);
            mayormenor(num,num1,num2,1);
            cont=0;
            }
        }
    return 0;
    }

int leeryvalidar(int linf,int lsup)
    {
    int num;
    do
        {
        scanf("%d",&num);
        getchar();
        }while(num<=linf || num>=lsup);
    return num;
    }

void mayormenor(int num,int num1,int num2,int param)
    {
    int max=num, min=num;
    if(max<num1)
        {
        if(num1<num2)max=num2;
            else max=num1;
        }
        else if(max<num2)max=num2;
    if(min>num1)
        {
        if(num1>num2)min=num2;
            else min=num1;
        }
        else if(min>num2)min=num2;
    if(param==0)printf("\n%d",min);
    if(param==1)printf("\n%d\n",max);
    }

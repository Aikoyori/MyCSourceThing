#include <stdio.h>

#include <stdlib.h>
int main()
{
    FILE *fp;
char buff[100];
int i;
int a=1;

do
{
    scanf("%d",&a);

     sprintf(buff,"%d.txt",a);
     fp=fopen(buff,"w");

         for (i=1;i<=12;i++)
    {
        fprintf(fp,"%4d %2c %4d=%8d\n",a,'x',i,a*i);

    }
    fclose(fp);
    }while(a!=0);
}







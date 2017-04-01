#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    FILE *fp,*fp2;
    int i;
    int a,b;
    cin >>a;
    cin >>b;
    fp= fopen("mu1.txt","w");
    fp2= fopen("mu2.txt","w");
    for (i=1;i<=12;i++)
    {
        fprintf(fp,"%4d %2c %4d=%8d\n",a,'x',i,a*i);
        printf("%4d %5c %4d=%8d\n",a,'x',i,a*i);

    }  for (i=1;i<=12;i++)
    {
        fprintf(fp,"%4d %2c %4d=%8d\n",b,'x',i,b*i);
        printf("%4d %5c %4d=%8d\n",b,'x',i,b*i);

    }


    fclose(fp);
    fclose(fp2);

    return 0;
}



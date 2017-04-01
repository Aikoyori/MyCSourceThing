#include <stdio.h>
int main()
{
    FILE *fp;
    int i;
    fp= fopen("ASCII.txt","w");
    for (i=65;i<=
    90;i++)
    {
        fprintf(fp,"%d%4c\n",i,i);
    }


    fclose(fp);

    return 0;
}


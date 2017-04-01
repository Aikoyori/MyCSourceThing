#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *fp;
    srand((unsigned) time(NULL));
    int i;
    fp= fopen("random.txt","w");
    for (i=0;i<100;i++)
    {
        fprintf(fp,"%d\n",rand()%100+1);
    }


    fclose(fp);

    return 0;
}



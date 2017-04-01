
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int r();
int main()
{
    FILE *fp;
    srand((unsigned) time(NULL));
    int i,j;
    fp= fopen("random6.txt","w");
    for (i=0;i<6;i++){
    for (j=0;j<6;j++)
    {
        fprintf(fp,"%5d",r());
    }fprintf(fp,"\n");
}

    fclose(fp);

    return 0;
}
int r()
{
    return rand()%100+1;
}


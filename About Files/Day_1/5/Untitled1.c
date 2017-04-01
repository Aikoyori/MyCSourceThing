
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *fp0,*fp,*fp2;
    int i,r;
    fp0= fopen("random.txt","r");
    fp= fopen("even.txt","w");
    fp2= fopen("odd.txt","w");
    for (;fscanf(fp0,"%d\n",&r)!=EOF;)
    {
        fscanf(fp0,"%d\n",&r);
        fprintf(r%2==0?fp:fp2,"%d ",r);
    }


    fclose(fp0);
    fclose(fp);
    fclose(fp2);

    return 0;
}



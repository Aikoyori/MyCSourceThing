#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    FILE *fp;
    srand((unsigned) time(NULL));
    int i;
    fp= fopen("random.txt","r");
    if(fp!=NULL)
    {
        {int number1,number2;
        while(fscanf(fp,"%d %d\n",&number1,&number2)!=EOF)
        {
            printf(number1>number2?"a more than b\n":number2>number1?"b more than a\n":"equal\n");
        }
    }}else
    {
        printf("404");
    }



    fclose(fp);

    return 0;
}


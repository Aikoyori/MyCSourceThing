#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    FILE *fp;
    int i,j,l=0;
    fp= fopen("sum.txt","w");
    for (i=0;i<10;i++)
    {
        cin >> j;
        l+=j;
        fprintf(fp,"%d\n",j);
    }
fprintf(fp,"Sum: %d\n",l);

    fclose(fp);

    return 0;
}



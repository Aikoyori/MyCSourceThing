#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    FILE *fp;
    fp= fopen("gabriel.virus","w");
    for (int i=0;i<100;i++)
    {
        fprintf(fp,"%d ",i+1);
    }


    fclose(fp);
     fp= fopen("gabriel.virus","r");
     if(fp!=NULL)
        {int number;
        while(fscanf(fp,"%d",&number)!=EOF)
     cout<<">>> "<<number<<endl;
     }else
     {cout<<"File Not Found";}
     fclose(fp);
    return 0;
}

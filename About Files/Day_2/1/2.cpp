#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp=fopen("msg.txt","w");
    for(int i=1;i<=10;i++)
    fprintf(fp,"Hi, Planet Earth! %d\n",i);
    fclose(fp);

    //READ
    fp=fopen("msg.txt","r");
    char message[100];
    fgets(message,100,fp);
    printf("%s",message);
    fclose(fp);
    return 0;
}


#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp=fopen("msg.txt","w");
    fprintf(fp,"%s","The Quick Brown Fox Jumps Over The Lazy Dog\n");
    fclose(fp);

    //READ
    fp=fopen("msg.txt","r");
    char message[100];
    fgets(message,100,fp);
    printf("%s",message);
    fclose(fp);
    return 0;
}

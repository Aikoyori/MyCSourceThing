#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    fp = fopen("xd.txt","r");
    char pixels[100];
    while(fgets(pixels,100,fp)!= NULL){
        int length = strlen(pixels);
        int j;
        for(j=0;j<length;j++){
            if(pixels[j]=='1'){
                printf("%c",'*');
            }else if(pixels[j]=='0'){
                printf("%c",'#');
            }else if(pixels[j]=='i'){
                printf("%c",pixels[j]);
            }
        } printf("\n");
    }
    fclose(fp);
return 0;
}

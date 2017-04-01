#include<stdio.h>
#include<string.h>
int main()
{

    FILE *fp;
    fp = fopen("word.txt","w");
    fprintf(fp,"%s","The Quick Brown Fox Jump Over The Lazy Dog \n");
    fprintf(fp,"%s","I do not get anything right the first time\n ");
    fprintf(fp,"%s","In fact, I know that a lot.\n");
    fclose(fp);
    fp = fopen("word.txt","r");
    char messages[100];
    while(fgets(messages,100,fp)!= NULL){
        int length = strlen(messages);
        int j;

        for(j=0;j<length;j++){

            if(messages[j]=='a'){
                printf("%c",'e');
            }else if(messages[j]=='e'){
                printf("%c",'i');
            }else if(messages[j]=='i'){
                printf("%c",'o');
            }else if(messages[j]=='o'){
                printf("%c",'u');
            }else if(messages[j]=='u'){
                printf("%c",'a');
            }else{printf("%c",messages[j]);}
        }
    }
    printf("\n");

}fclose(fp);

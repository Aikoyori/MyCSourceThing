#include <stdio.h>
#include <string.h>
#include <algorithm>
void FrameL1_5(char a)
{
    printf("..%c.",a);
}
void FrameL2_4(char a)
{
    printf(".%c.%c",a,a);
}
void FrameL3(char a,char b)
{
    printf("%c.%c.",a,b);
}

int main()
{
    int i,j;
    char a[33];
    scanf("%s",a);

        for(j=0;j<strlen(a);j++)
        {
if(j%3==2)
        {
            FrameL1_5('*');
        }else{FrameL1_5('#');}
        }
        printf(".\n");
        for(j=0;j<strlen(a);j++)
        {
if(j%3==2)
        {
            FrameL2_4('*');
        }else{FrameL2_4('#');}
        }
        printf(".\n");
for(j=0;j<strlen(a);j++)
        {
if((j%3==2||j%3==0)&&j!=0)
        {
            FrameL3('*',a[j]);
        }else{FrameL3('#',a[j]);}
        }
        if(strlen(a)%3==0)
        printf("%c\n",'*');
        else
        printf("%c\n",'#');
        for(j=0;j<strlen(a);j++)
        {
if(j%3==2)
        {
            FrameL2_4('*');
        }else{FrameL2_4('#');}
        }
        printf(".\n");
         for(j=0;j<strlen(a);j++)
        {
if(j%3==2)
        {
            FrameL1_5('*');
        }else{FrameL1_5('#');}
        }
        printf(".\n");

 return 0;
}

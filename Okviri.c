#include <stdio.h>
#include <string.h>

void FrameL1_5(char a)
{
    printf("..%c.\n",a);
}
void FrameL2_4(char a)
{
    printf(".%c.%c\n",a,a);
}
void FrameL3(char a,char b)
{
    printf("%c.%c.\n",a,b);
}

int main()
{
    int i,j;
    char a[16];
    scanf("%s",a);


        for(j=0;j<=16;j++)
        {
if(i%3==0)
        {
            FrameL1_5();
        }else{}
        }


 return 0;
}

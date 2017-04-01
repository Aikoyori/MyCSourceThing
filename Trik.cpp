
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
void swapint(int *a,int *b);
main()
{
    char a[50];
    int ball[3]={1,0,0};
    int i;
    scanf("%s",a);
    for (i=0;i<strlen(a);i++){
     switch(a[i])
     {
        case 'A':swapint(&ball[0],&ball[1]);break ;
        case 'B':swapint(&ball[1],&ball[2]);break ;
        case 'C':swapint(&ball[0],&ball[2]);break ;
     }

    }
if(ball[0]==1)
    printf("1");
    else
if(ball[1]==1)
    printf("2");
    else
if(ball[2]==1)
    printf("3");

}
void swapint(int* a,int* b)
{
    int x=*a;
    *a=*b;
    *b=x;
}

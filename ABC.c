#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int A,B,C;
    if(a>b&&a>c)
    {
        C=a;
        if(b>c)
        {
            B=b;
            A=c;
        }
        else
        {
            B=c;
            A=b;
        }
    }else     if(b>a&&b>c)
    {
        C=b;
        if(a>c)
        {
            B=a;
            A=c;
        }
        else
        {
            B=c;
            A=a;
        }
    }else     if(c>b&&c>a)
    {
        C=c;
        if(b>a)
        {
            B=b;
            A=a;
        }
        else
        {
            B=a;
            A=b;
        }
    }
    char x,y,z;
    scanf(" %c%c%c",&x,&y,&z);
    if (x=='A')
        printf("%d ",A);
    if (x=='B')
        printf("%d ",B);
    if (x=='C')
        printf("%d ",C);
    if (y=='A')
        printf("%d ",A);
    if (y=='B')
        printf("%d ",B);
    if (y=='C')
        printf("%d ",C);
    if (z=='A')
        printf("%d ",A);
    if (z=='B')
        printf("%d ",B);
    if (z=='C')
        printf("%d ",C);
    return 0;
}

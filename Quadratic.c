#include <stdio.h>
#include <math.h>
float pos_ans(int a,int b,int c)
{
    return (-b+sqrt(b*b-4*a*c))/2*a;

}
float neg_ans(int a,int b,int c)
{
    return (-b+sqrt(b*b-4*a*c))/2*a;

}

int main()
{
int a,b,c,d,e,f,g,h;
float x1,x2;
scanf("%d %d %d",&a,&b,&c);
x1=pos_ans(a,b,c);
x2=neg_ans(a,b,c);
for (d=1;d==d;d++)
{
    e=x1*d;
    if (ceil(e)==e)
    {
break;
    }

    }
    for (g=1;g==g;g++)
{
    f=x1*g;
    if (ceil(f)==f)
    {
break;
    }

    }
printf("%d %d %d %d",d,e,g,f);
}


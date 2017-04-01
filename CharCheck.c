#include <stdio.h>
#include <string.h>
int main()
{
int o,n,I=0,a=0,i;
char b[10000];

scanf("%s",b);
for(i=0;i<=strlen(b);i++)
{
for(o=65;o<=90;o++)
{
if(b[i]==o)
{
    I++;
}
}for(n=97;o<=122;o++)
{if(b[i]==o)
{
    a++;
}}}



if(I==strlen(b))
    printf("All Capital Letter");
else if(a==strlen(b))
    printf("All Small Letter");
else
    printf("Mix");

}

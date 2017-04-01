#include <stdio.h>
#include <math.h>
int main()
{
float x,y;
scanf("%f %f",&x,&y);
if(x>0||y>0)
{
    printf("%f",sqrt((x*x+y*y)));
}

return 0;
}

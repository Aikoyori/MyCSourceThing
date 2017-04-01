#include <stdio.h>
#define PI 3.1415926536

float dayum();
int main()
{
    printf("%f",dayum());
return 0;
}
float dayum()
{
    int ton;
    scanf("%d",&ton);

    return PI*ton*ton;
}

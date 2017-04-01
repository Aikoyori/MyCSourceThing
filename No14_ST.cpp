#include <iostream> //โจทย์ : รับสตริงเข้ามา 2 สาย แล้วให้นำสตริงแรก มาต่อสตริง 2 และนำสตริง 2 ต่อด้วยสตริงแรก แล้วเปรียบเทียบแล้วแสดงสตริงที่น้อยกว่า
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int abba;
char a[15],b[15];
scanf("%s",a);
scanf("%s",b);
char ab[30],ba[30];
strcpy(ab,strcat(a,b));
strcpy(ba,strcat(b,a));
abba=strcmp(ab,ba);
if(abba>0)
printf("%s",a);
else if (abba<0)
    printf("%s",b);
}


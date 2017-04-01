//โจทย์ : รับสตริงเข้ามา 2 สาย แล้วเปรียบเทียบแล้วแสดงสตริงที่น้อยกว่า
#include <stdio.h>
#include <string.h>
int main()
{
    int abba;
char a[15],b[15];
scanf("%s",a);
scanf("%s",b);

abba=strcmp(a,b);
if(abba>0)
puts(b);
else if (abba<0)
puts(a);
}


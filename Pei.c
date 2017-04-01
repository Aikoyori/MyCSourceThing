#include <stdio.h>
#include <limits.h>
void my_print(char,long);

main()
{
my_print('*',LONG_MAX);
}

void my_print(char ch,long x)
{
while(x>0)
{
    printf("%c",ch);
    x--;
    }
}

#include <cstdio>
int main()
{
  int sum = 0;
BigInteger fac = 1;

for (int i = 2; i <= 100; i++) {
    fac *= i;
}

while (fac > 0) {
    sum += (int)(fac % 10);
    fac /= 10;
}
return sum;
}



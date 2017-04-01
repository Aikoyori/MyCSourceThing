#include <iostream>
using namespace std;
int minmaxof(int a[],int b);
int main()
{
int b=10;
int a[b];
for (int i=0;i<b;i++)
{
    cin >>a[i];
}
cout << minmaxof(a,b);
}
int minmaxof(int a[],int i)
  {

int ab,max=0;

  for (ab = 0; ab < i; ab++)
    {
      a[ab] > max? max = a[ab]:max=max;
    }
 return max;
  }

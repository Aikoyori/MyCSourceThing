#include <cmath>
#include <iostream>
using namespace std;
int minmaxof(int a[],int b);
int main()
{
    int b;
    cin >> b;
int a[b];
for (int i=0;i<b;i++)
{
    cin >>a[i];
}
minmaxof(a,b);
}

int minmaxof(int a[],int i)
  {
      int ab;
int max = a[0];
int min = a[0];

  for (ab = 0; ab < i; ab++)
    {
      if (a[ab] > max)
        {
          max = a[ab];
        }
      else if (a[ab] < min)
        {
          min = a[ab];
        }
    }
  cout << min << endl;
  cout << max << endl;

  return 0;
}

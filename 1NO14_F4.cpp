#include <iostream>
using namespace std;
long cubed(int);
int main()
{
    int a;
    cin >>a;
    cout << cubed(a);
    return 0;
    }
    long cubed (int a)
    {
        return a*a*a;
    }

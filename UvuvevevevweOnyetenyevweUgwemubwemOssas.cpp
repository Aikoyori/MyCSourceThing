#include <iostream>
using namespace std;
long cube(int,int,int);
int main()
{
    int a,b,c;
    cin >>a>>b>>c;
    cout << cube(a,b,c);
    return 0;
}
long cube(int a,int b,int c)
{
    return a*b*c;
}

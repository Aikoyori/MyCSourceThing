
#include <iostream>
using namespace std;
int rec(int ,int);
int main()
{
int x,y;
cin >> x >> y;
cout << rec(x,y);

}
int rec(int a,int b)
{
    return a*b;
}

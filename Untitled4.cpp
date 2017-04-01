

#include <iostream>
using namespace std;
int rec(int);
int main()
{
int y;
cin >> y;
cout << (rec(y)==1? "Even":"Odd");
}
int rec(int a)
{
    return a%2==0? 1:0;
}

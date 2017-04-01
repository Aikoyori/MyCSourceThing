

#include <iostream>
#include <cstring>
using namespace std;
char *rec(char ,int);
int main()
{
    char x;
int y;
cin >> x >> y;
cout << rec(x,y);

}
char *rec(char a,int b)
{
    char ch[b+1];
    for(int i=0;i<b;i++)
    {
        ch[i]=a;
    }
    return ch;
}

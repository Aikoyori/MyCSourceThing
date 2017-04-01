

#include <iostream>
using namespace std;
int rec(int ,int);
int main()
{
int x,y;
cin >> x >> y;
cout << rec(x,y);

}
char rec(char a,int b)
{
    char ch[b]="";
    for(int i=0;i<=b;i++)
    {
        strcat(a,ch);
    }
    return ch;
}

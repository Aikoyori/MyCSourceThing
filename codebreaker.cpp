#include <iostream>
#include <cstring>
#include <cstdio>
#include <conio.h>
using namespace std;
int main()
{
    int num[6];
    for (int i=0;i<=5;i++)
    {
        cin >> num[i];
    }
    for (int i=0;i<=4;i++)
    {
        cout << num[i+1]-num[i];
    }
    cout<<endl << "Press any key to exit...";
getch();
}


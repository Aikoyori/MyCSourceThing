#include <iostream> //⨷�� : �Ѻʵ�ԧ����� 2 ��� ��������ʵ�ԧ�á �ҵ��ʵ�ԧ 2 ��й�ʵ�ԧ 2 ��ʹ���ʵ�ԧ�á �������º��º�����ʴ�ʵ�ԧ�����¡���
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int abba;
char a[15],b[15];
scanf("%s",a);
scanf("%s",b);
char ab[30],ba[30];
strcpy(ab,strcat(a,b));
strcpy(ba,strcat(b,a));
abba=strcmp(ab,ba);
if(abba>0)
printf("%s",a);
else if (abba<0)
    printf("%s",b);
}


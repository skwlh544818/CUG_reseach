/**
 * ��������MinGW-g++
 */
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
char dense[100];
char* reverse(const char *str/*in*/);
/**
 * ���ܣ���������ַ�����ת������
 * ������const char *str:������ַ�����
 * Ĭ�ϴ�С������100�ֽڡ�const��ֹ�޸ġ�
 * ˵��������������ȫ�ֱ��� char dense[100]
 */
char* reverse1(const char *str/*in*/);
/**
 * ˵�������ܺͲ�����reverse��ͬ������û������ȫ�ֱ��������������˶�����
 */
void test();
/**
 * ���ܣ����Ժ���
 */
char* reverse(const char *str/*in*/)
{
    const char *temp=str;
    memset(dense,'\0',100);//���ԭ���ڴ�ȫ�����е�����
    int j=0;
    for(int i=strlen(temp)-1;i>=0;--i)
    {
        dense[j++]=temp[i];
    }
    dense[j]='\0';
    return dense;
}
char*  reverse1(const char *str/*in*/)
{
    const char *temp=str;
    memset(dense,'\0',100);//���ԭ���ڴ�ȫ�����е�����
    char *dense1=(char*)malloc(sizeof (char)*100);
    int j=0;
    for(int i=strlen(temp)-1;i>=0;--i)
    {
        dense1[j++]=temp[i];
    }
    dense1[j]='\0';
    return dense1;
}
/**
 * ����������1.��Hello";
 * 2.NULL;
 * 3."nihao buzhidaoni\nguode113zenmeyang"
 * 4."start     \t\n\n   stop"
 */
void test()
{
    char n[100]="start     \t\n\n   stop";
    char *m=reverse1(n);
    printf("%s\n",m);
}
int main()
{
    test();
    return 0;
}
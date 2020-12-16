/**
 * 编译器：MinGW-g++
 */
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
char dense[100];
char* reverse(const char *str/*in*/);
/**
 * 功能：将输入的字符串反转并返回
 * 参数：const char *str:输入的字符串。
 * 默认大小不大于100字节。const防止修改。
 * 说明：本题运用了全局变量 char dense[100]
 */
char* reverse1(const char *str/*in*/);
/**
 * 说明：功能和参数和reverse相同，本题没有运用全局变量。而是设置了堆区。
 */
void test();
/**
 * 功能：测试函数
 */
char* reverse(const char *str/*in*/)
{
    const char *temp=str;
    memset(dense,'\0',100);//清空原先内存全局区中的数据
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
    memset(dense,'\0',100);//清空原先内存全局区中的数据
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
 * 测试用例：1.“Hello";
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
#include <stdio.h>
#include <string.h>
char dense[100];
char* reverse(const char *str/*in*/);
/**
 * 功能：将输入的字符串反转并返回
 * 参数：const char *str:输入的字符串。默认大小不大于100字节。
 * 说明：本题运用了全局变量 char dense[100]
 */
void test();
/**
 * 功能：测试函数
 */
char* reverse(const char *str/*in*/)
{
    const char *temp=str;
    memset(dense,'\0',100);
    int j=0;
    for(int i=strlen(temp)-1;i>=0;--i)
    {
        dense[j++]=temp[i];
    }
    dense[j]='\0';
    return dense;
}
/**
 * 测试用例：1.“Hello";
 * 2.NULL;
 * 3."nihao buzhidaoni\nguode113zenmeyang"
 */
void test()
{
    char n[100]="nihao buzhidaoni\nguode113zenmeyang";
    char *m=reverse(n);
    printf("%s\n",m);
}
int main()
{
    test();
    return 0;
}
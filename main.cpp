#include <stdio.h>
#include <string.h>
char dense[100];
char* reverse(const char *str/*in*/);
/**
 * ���ܣ���������ַ�����ת������
 * ������const char *str:������ַ�����Ĭ�ϴ�С������100�ֽڡ�
 * ˵��������������ȫ�ֱ��� char dense[100]
 */
void test();
/**
 * ���ܣ����Ժ���
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
 * ����������1.��Hello";
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
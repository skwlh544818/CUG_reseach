#include <bits/stdc++.h>
using namespace  std;

void sort1(int *a,int n)
{
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(a[j]<a[i]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

}

void test(int *a )
{
    for(int i=9;i>=0;--i)
    {
        a[9-i]=i;
    }
}

void print(int *a,int n)
{
    for (int i=0;i<n;++i)
        printf("%d ",a[i]);
}

int main()
{
    int a[15];
    test(a);
/*
    for(int i=0;i<10;++i)
    {
        //scanf("%d",a+i);
//a[i]=test()[i];
    }
    */
    sort1(a,10);
    //sort(a,a+10);
    print(a,10);
    return 0;
}


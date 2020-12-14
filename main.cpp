#include <stdio.h>

int checkChopsticks(int *chopsticks,int n)
{
    if(chopsticks == NULL)
    {
        return -1;
    }
    int recod[20]={0};
    int count = 0, index = 0;

    /*foreach the chopsticks*/
    for(int i = 0; i < n; i++)
    {
        recod[chopsticks[i]]++;
    }

    for(int i = 0; i < recod.length; i++)
    {
        if(recod[i] % 2 == 1)
        {
            count++;
            index = i;
        }
    }

    if(count == 0 || count > 1)
    {
        return -1;
    }
    return index;
}

int main()
{
    int n,a[20];
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    {
        scanf("%d",a+i);
    }
    printf("%d\n",ChopSticks(a,n));
    return 0;
}
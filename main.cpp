#include <stdio.h>
int main()
{
    int n,a,b[1000]={0};
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("-1");
    }
    else{
        for(int i=0;i<n;++i)
        {
            scanf("%d",&a);
            b[a]++;
        }
        for(int i=0;i<1000;++i)
        {
            if (b[i]%2==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}
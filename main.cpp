#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int p=x*y;
    int s=x+y;
    int total=s*s+p*(s-x)*(p+y);
    printf("%d\n",total);
    return 0;
}
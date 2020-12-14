#include <stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double avg=(a+b+c)/3;
    if (avg>=90)printf("A\n");
    else if(avg>=70 &&avg<90) printf("B\n");
    else if (avg>=50 && avg<70)printf("C\n");
    else if (avg<50)printf("F\n");
    return 0;
}
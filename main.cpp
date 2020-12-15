#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("lf lf lf",&a,&b,&c);
    if(a==0&&b==0)printf("error");
    else if(a==0)printf("%f\n",-1*c/b);
    else
    {
        double delta=b*b-4*a*c;
        if (delta<0)printf("error");
        else if (delta==0)printf("%f\n",(-1*b+sqrt(delta))/(2*a));
        else printf("%f %f\n",(-1*b+sqrt(delta))/(2*a),(-1*b-sqrt(delta))/(2*a));

    }
    return 0;

}
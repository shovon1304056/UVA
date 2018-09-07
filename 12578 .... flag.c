#include<stdio.h>
#define pi acos(-1)

int main()
{
    double a,b,x,y,r,l;
    int t,i;
    scanf("%d",&t);
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lf",&l);
            a=6*l/10;
            b=2*l/10;
r=l*a;
            y=pi*b*b;
            x=r-y;
printf("%.2lf %.2lf\n",y,x);

        }

    }
    return 0;
}

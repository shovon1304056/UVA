#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,p,ans;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
    p=(a+b+c)/2.0;
    ans=4.0/3.0*sqrt(p*(p-a)*(p-b)*(p-c));


        if(!(ans>0))
      printf("-1.000");
else
    printf("%.3lf\n",ans);
    }

    return 0;
}

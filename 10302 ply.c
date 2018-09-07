#include<stdio.h>
int main()
{
    double a,b,n;
    while (scanf("%lf",&n)!=EOF)
    {
        a=(n*n*(n+1)*(n+1));
        b=a/4;
        printf("%.0lf\n",b);

}        return 0;

}

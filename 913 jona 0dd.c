#include<stdio.h>
#include<math.h>
int main()
{
    long long a,b,n;
    while(scanf("%lld",&n)==1)
    {
        b=(n*(n+2))/2;
        a=(b*3)-6;
        printf("%lld\n",a);
    }
    return 0;
}

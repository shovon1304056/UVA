#include<stdio.h>
int main()
{
    long long int a,b,c=0,n,i,p=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld",&a,&b);
        c=a|b;
        p=a&b;
        printf("Case %lld: %lld %lld\n",i,c,p);
    }
    return 0;
}


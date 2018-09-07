#include<iostream>
#include<cstdio>
#include<math.h>
    long long gcd(long long a,long long b)
    {
    if(a==0)
      {
          long long gcd=a;
          return gcd;}
    else if(b==0)
      {
        long long gcd=b;
        return gcd;}
    else
    {
        while(b!=0)
        {
          long long  c=b;
            b=a%b;
            a=c;
        }
        long long gcd=a;

    return gcd;}
    }
int main()
{
    long long g,n,i,j;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;

        g=0;

        for(i=1;i<n;i++)
{
for(j=i+1;j<=n;j++)

{

    g+=gcd(i,j);

}
    }
    printf("%lld\n",g);
    }
    return 0;
}
















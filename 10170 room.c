#include<stdio.h>
int main()
{
   long long i,j,n,s,d;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        n=0;
        for(i=s;;i++)
        {
            n=n+i;
            if(n>d || n==d)
            {
                printf("%lld\n",i/2);
                break;
            }
        }
    }
    return 0;
}

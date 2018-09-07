#include<stdio.h>
int main()
{
    int a,b,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        break;
        a=1;
        for(;a<=n;)
        {
            a=a*2;
            b=a%n;

        }
          printf("%d\n",n-b);
    }
    return 0;
}

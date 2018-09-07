#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else{
                a=sqrt(n);
        if(a*a==n)
        printf("yes\n");
        else
            printf("no\n");
    }
    }
    return 0;
}

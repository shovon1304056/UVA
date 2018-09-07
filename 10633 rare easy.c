#include<stdio.h>
int main()
{
    long int n,m;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
            break;
        m=(n*10)/9;
        if(n%9==0)
            printf("%ld %ld\n",m-1,m);
else
    printf("%ld\n",m);
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    long long n,p;
    int i,j;
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
    while (scanf("%lld",&n)==1)
    {
        p=(sqrt(1+8*n)-1)/2;
    printf("%lld\n",p);
    }
    }
    return 0;

}

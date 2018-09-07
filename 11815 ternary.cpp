#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long n,p,a[100],i,j,k,l,b[100];
    while(scanf("%lld",&n)==1)
    {
        i=-1;
        if(n<0)
            break;
            if(n==0)
            {
                printf("0\n");
                continue;
            }
        while(n!=0)
        {
            p=n%3;
            i++;
            a[i]=p;
            n=n/3;
            }
        for(j=i,k=0;j>=0,k<=i;j--,k++)
        {
            b[k]=a[j];
           }
         for(j=0;j<k;j++)
{
             printf("%lld",b[j]);
         }
         printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    long long a,b,n;
    int i;
for(i=1;;i++){
//while(scanf("%lld %lld",&a,&b)==1)
    scanf("%lld %lld",&a,&b);

        // for(i=1;;i++){
        if(a==0 && b==0)
            break;
        else
        {
        n=((a*b*(a-1)*(b-1))/4);
            printf("Case %d: %lld\n",i,n);
        }
    }
        return 0;
    }



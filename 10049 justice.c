#include<stdio.h>
int main()
{
    long long a,p;
    while(scanf("%lld",&a)==1)
    {
        if(a<0)
            break;
        if(a==1)
        {
            printf("0%c\n",37);
            continue;
        }

            p=a*25;
            printf("%lld%c\n",p,37);

    }
    return 0;
}


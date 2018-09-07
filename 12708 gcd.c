#include<stdio.h>
int main()
{
    long int n,p;
    int i;
    while(scanf("%ld",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%ld",&p);
            if(p%2!=0)
            {
                p--;
                printf("%ld\n",p/2);
            }
            else
            {
                 printf("%ld\n",p/2);
            }
        }

    }
    return 0;
}

#include<stdio.h>
int main()
{
    long int i,b,n;
    while(scanf("%ld",&n)==1)
    {
    if(n==0)
            break;
        else
        {
        if((n%11)==0)
          printf("%ld is a multiple of 11\n",n);

         else
            printf("%ld is not a multiple of 11\n",n);
        }

    }
    return 0;
}

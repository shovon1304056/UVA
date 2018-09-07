#include<stdio.h>
int main()
{
   long long int a[81];
   int n,i;

            a[0]=1;
           a[1]=1;
            for(i=2;i<81;i++){
                a[i]=a[i-2]+a[i-1];
            }
            while(1)
            {
                scanf("%d",&n);
                if(n==0)
                    break;
                else
                    printf("%lld\n",a[n]);
            }

            return 0;
}

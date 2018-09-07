#include<stdio.h>
int main()
{
    int n,i,p;
    int ans;
    while(scanf("%d",&n))
    {
        ans=0;
        if(n==0)
            break;
        else{
         for(i=1;i<=n;i++)
         {
             p=i*i;
             ans=ans+p;
         }
         printf("%d\n",ans);
        }
    }
    return 0;
}

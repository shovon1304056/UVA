#include<stdio.h>
int main()
{
    int a[100];
    int b,c,i,j,n,sum;
    while(scanf("%d",&n)==1)
    {

        for(i=1;i<=n;i++)
        {
            scanf("%d",a[i]);

        for(j=n;i>=a[j];j--)
        {
              sum=0;
            sum=sum+a[j];
            printf("%d",sum);
        }
        printf("%d",sum);


}
}   return 0;

    }

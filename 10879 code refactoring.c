#include<stdio.h>
int main()
{
    int n,cs,i,j,co;
    scanf("%d",&cs);
    for(i=1;i<=cs;i++)
    {
         scanf("%d",&n);
        printf("Case #%d = %d ",cs,n);
        co=0;
        for(j=2;j<=sqrt(n);j++)
        {
            if(n%j==0)
            {
                printf("= %d * %d",j,n/j);
                co++;
            }
            if(co==2)
                break;
        }
        printf("\n");
    }
    return 0;
}

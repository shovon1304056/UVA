#include<stdio.h>
int main()
{

    int ara[1000];
    int i,j,n,count;
    while(scanf("%d",&n)!=EOF)
    {

        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
        }
        count=0;
        for(i=0;i<n-1;i++)
        {

            for (j=i+1;j<n;j++)
            {
                if(ara[i]>ara[j])
                {
                    count++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);

    }

    return 0;
}

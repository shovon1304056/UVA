#include <stdio.h>
int main()
{
    int test,c,k,sum,n,p,l,q,i,w[100],j,t;
    scanf(" %d",&test);
   for(l=1;l<=test;l++)
    {
        c=0;
        sum=0;
        scanf("%d %d %d",&n,&p,&q);
        for(i=0;i<n;i++)
        {
            scanf("%d",&w[i]);
}
        for(k=0;k<p;k++)
        {
            sum=sum+w[k];
            if(sum>q)
            {
                break;
            }
            c++;
        }
        printf("Case %d: %d\n",l,c);
    }
    return 0;
}

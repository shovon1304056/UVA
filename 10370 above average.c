#include<stdio.h>
int main()
{
    int sum,av,i,j,n,a[1020],c,b;
    float ans;

    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        b=0;
        sum=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&a[j]);

        for(j=0;j<n;j++)
sum=sum+a[j];
av=sum/n;
for(j=0;j<n;j++)
            if(a[j]>av)
                b++;

        ans=(float)b/(float)n;

           printf("%.3f%%\n",ans*100);
        }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j,l,h,n,b[50],a;

scanf("%d",&a);
    {
        for(i=1;i<=a;i++)
        {
            h=0;
            l=0;
            scanf("%d",&n);
            for(j=0;j<n;j++)
                scanf("%d",&b[j]);
                for(j=1;j<n;j++)
                {
                    if(b[j]>b[j-1])
                        h++;
                     if(b[j-1]>b[j])
                        l++;
                }
             printf("case %d : %d %d\n" ,i,h,l);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,r,n,x;
    i=1;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0 && n==0)
            break;

        x=(r-n)/n;
      if(r>=n && r%n!=0)
      x++;
        if(x<=26)
            printf("Case %d : %d\n",i,x);
            else
                printf("Case %d: impssible\n",i);
i++;
    }

    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,y,p,i;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
       {
        scanf("%d %d",&x,&y);
        p=(x/3)*(y/3);
          printf("%d\n",p);
       }

    }
    return 0;
}

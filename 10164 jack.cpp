#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,a,b,i,mx;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;

        }
        else
        {mx=0;
        a=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&b);
              a=a+b  ;
              if(a<0)
              {
                  a=0;
              }
              else
              {
                  mx=max(a,mx);
              }
            }
            if(a==0)
            {
                printf("Losing streak.\n");

            }
            else
            {
                printf("The maximum winning streak is %d.\n",mx);
            }
        }

    }
    return 0;
}

#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,c,p,sum,i;
    p=0;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
            break;
            p++;
            sum=1;
            c=0;
        if(n>1)
        {
for(i=0;;i++)
{            sum=sum*2;
            c++;

       if(sum>=n)
           break;
        }

printf("Case %d: %d\n",p,c);
    }

    }
    return 0;

}

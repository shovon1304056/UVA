#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    int a,b,c,d,e,f,g,h;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d:%d %d:%d ",&a,&b,&c,&d);
            a=a*60+b;
            c=c*60+d;
            scanf("%d:%d %d:%d",&e,&f,&g,&h);
            e=e*60+f;
            g=g*60+h;

        printf("Case %d: ",i);
       if(a>g||e>c)
       {
           printf("Hits Meeting");

       }
       else
       {
           printf("Mrs Meeting");
       }
       printf("\n");
    }
    }
    return 0;
}

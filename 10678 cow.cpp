#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    double n,a,b,p,q,r;
scanf("%lf",&n);
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%lf %lfd",&a,&b);
            p=sqrt((b/2*b/2)-(a/2*a/2));
            q=b/2;
            r=p*q*pi;
            printf("%lf\n",r);

        }
    }

}

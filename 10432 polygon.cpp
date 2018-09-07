#include<bits/stdc++.h>

using namespace std;
int main()
{
    int r,n;
    double p;
    double pi=2*acos(0);
    while(scanf("%d %d",&r,&n)!=EOF)
    {
    p=.5*(n*r*r*sin(2.*pi/n));
        printf("%.3lf\n",p);
    }

    return 0;
}

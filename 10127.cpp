#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,p,i,n;
    while(scanf("%lf",&n)==1)
    {
        a=1;
        for( i=1;;i++)
        {
        if(fmodl(a,n)==0)
            break;
            else{
                p=(a*10+1);
                p=fmodl(p,n);
            }
        }
        printf("%lf",i);
    }
return 0;
}

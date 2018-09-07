#include<stdio.h>
#include<math.h>
int main()
{
    double a,i,n;
    while(scanf("%lf",&n)==1)
    {
        a=1;
        for(i=1;;i++)
        {
        if(fmodl(a,n)==0)
            break;
            else{
                a=(a*10)+1;
                a=fmodl(a,n);
            }
        }
        printf("%.0lf\n",i);
    }
return 0;
}

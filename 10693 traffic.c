#include<stdio.h>
#include<math.h>
int main()
{
    double l,f,v,vol;
    while(scanf("%lf %lf",&l,&f)==2)
    {
        if(l==0 & f==0)
            break;
        else
       {
        v=sqrt(2.0*l*f);
        vol=(v*3600.0)/(l*2.0);
        printf("%.8lf %.8lf\n",v,vol);
    }
    }
    return 0;
}

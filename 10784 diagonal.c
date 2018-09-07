#include<stdio.h>
#include<math.h>
int main()
{
    double n,p;
    int i=0;
    while(scanf("%lf",&n)==1)
    {
        i+=1;
        if(n==0)
    break;
    else{

        p=ceil((3+sqrt(9+8*n))/2);
 printf("Case %d: %.0lf\n",i,p);

            }
            }

    return 0;
}

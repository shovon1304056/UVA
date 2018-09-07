#include<stdio.h>
#include<math.h>
int main()
{
    int h1,m1,h2,m2,p,a,b,i,j;
    while(scanf("%d %d %d %d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
            break;

                a=(h1*60)+m1;
        b=(h2*60)+m2;
         if(a>b)
        {
        b=b+1440;
        j=abs(a-b);
    }
      printf("%d\n",abs(a-b));
    }
    return 0;
}

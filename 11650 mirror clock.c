#include<stdio.h>
int main()
{
    int h,m,t,i;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d:%d",&h,&m);
            h=11-h+(m==0);
            if(h<=0)
                h=h+12;
            if(m!=0)
                m=60-m;
   printf("%02d:%02d\n",h,m);
        }
    }
    return 0;
}

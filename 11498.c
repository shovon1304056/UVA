#include<stdio.h>
int main()
{
    long long n,x1,y1,x,y;
    int i;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        scanf("%lld %%lld",&x1,&x1);
        for(i=0;i<n;i++)
        {
        scanf("%lld %lld",&x,&y);

    if(x==x1 || y==y1)
            {printf("divisa\n");}
        else     if(x>x1 && y>y1)
        printf("NE\n");
   else     if(x<x1 && y>y1)
            {printf("NO\n");}
       else if(x<x1 && y<y1)
       {

        printf("SO\n");}
        else
           {

           printf("SE\n");
           }
        }
    }
    return 0;
}

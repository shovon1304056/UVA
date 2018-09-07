#include<stdio.h>
#include<math.h>
int main()
{
    int n,d1,m1,y1,d2,m2,y2,p,q,r,f,y,i,x;

    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&d1,&m1,&y1);
        scanf("%d %d %d",&d2,&m2,&y2);
   if(y1>=y2 )
   {
       p=(y1-y2)*365;
       q=(abs(m1-m2)*30);
       r=(abs(d1-d2));
       x=p+q+r;
       if((x/365)>130)
       {
           printf("Case #%d: Check birthdate\n",i);

       }
       else if((x/365)<=130  )
        {
           f=x/365;
           printf("Case %d:%d\n",i,f);
       }
       else
    {
           y=0;

           printf("Case %d:%d",i,y);
       }
   }
   else
    printf("Case %d:invalid\n",i);
    }
   return 0;
}

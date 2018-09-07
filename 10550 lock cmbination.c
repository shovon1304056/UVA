#include<stdio.h>
int main()
{
    int a,b,c,d;
   int sum;
   while(scanf("%d %d %d %d",&a,&b,&c,&d)!=EOF)
   {
       sum=1080;
       if(a==0 && b==0 && c==0 && d==0)
        break;
if(a<b)
    sum=sum+(40-b+a)*9;
else
    sum=sum+(b-a)*9;
if(b>c)
    sum=sum+(40-b+c)*9;
else
     sum=sum+(b-c)*9;
if(c<d)
      sum=sum+(40-d+c)*9;
else
     sum=sum+(d-c)*9;

       printf("%d\n",sum);
   }
   return 0;

}


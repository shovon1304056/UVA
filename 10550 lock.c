#include<stdio.h>
int main()
{
   long int a,b,c,d;
   long int sum;
   while(scanf("%ld %ld %ld %ld",&a,&b,&c,&d)==4)
   {
       sum=1080;
       if(a==0 && b==0 && c==0 && d==0)
        break;

      else if(b>a && b>c && d>c)
        sum=sum+(40-b+a)*9+(40-b+c)*9+(40-d+c)*9;
       printf("%ld\n",sum);
   }
   return 0;

}

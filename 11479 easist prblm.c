#include<stdio.h>
int main()
{
long  long a,b,c;
int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
      while(scanf(("%lld %lld %lld"),&a,&b,&c))

    {
        if(a>0 && b>0 && c>0){

        if((a+b<c) || (a+c<b) || (b+c<a))  {
            printf("Case %d: Invalid\n",i);
        }
        else if(a==b && b==c){
            printf("Case %d: Equiletaral\n",i);
        }
        else if((a==b && a!=c && b!=c && (a+b>c))||(b==c && a!=b && a!=c && (a+b>c) )|| (a==c && a!=b && b!=c && (a+b>c) )){
            printf("Case %d: Isosceles\n",i);
        }
        else if(a!=b && b!=c && a!=c && ((a+b>c) || (a+c<b) || (b+c<a)))
        {
            printf("Case %d: Scalene\n",i);
        }
    }
    }
    }
    return 0;
}

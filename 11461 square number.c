#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,p,q;
    int x,i;
    while(scanf("%ld %ld",&a,&b)==2)
    {
    x=0;
        if(a==0 && b==0)
            break;
        else
        p=sqrt(a);
        q=sqrt(b);
        for(i=p;i<=q;i++)

        {
          //  c=pow(i,2);
        //if(c>=a && c<=b)
            x++;
          // else if(c>b)
              //  break;
        }
        printf("%d\n",x);
    }
    return 0;
}

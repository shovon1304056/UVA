#include<stdio.h>
int main()
{
    long int b,s;
    int i=0;
    while(1)
    {
        scanf("%ld %ld",&b,&s);
        if(b==0 && s==0)
            break;
        i++;
        if(b==s)
        {
            printf("Case %d::-|\n",i);
        }
        else if(b<s)
        {
             printf("Case %d::-|\n",i);
        }
        else if(b==1)
        {
            printf("Case %d::-\\n",i);
        }
         else if(s*(b-1)>b*(s-1))

             {printf("Case %d::-(\n",i);
             }
              else
             {printf("Case %d::-)\n",i);}
    }
    return 0;
}

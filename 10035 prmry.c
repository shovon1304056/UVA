#include<stdio.h>
int main()
{
     int carry,r,i;
     long int a,b,c;
    while(scanf("%ld %ld",&a,&b)==2)
    {

        if(a==0 && b==0)
        {
            break;
        }
        else

        {
              carry=0;
r=0;
            for(i=1;;i++)
            {
                if(a==0 && b==0)
                {
                    break;

                }
                c=(a%10)+(b%10)+r;

                if(c>9)
                {
                    carry++;
                    r=1;
                }
else{r=0;}
                a=a/10;
                b=b/10;
            }
            if(carry==0)
            {
                printf("No carry operation.\n");

            }
            else if(carry==1)
            {
                printf("1 carry operation.\n");
            }
            else
            {
                printf("%d carry operations\n",carry);
            }
        }
    }
    return 0;
}


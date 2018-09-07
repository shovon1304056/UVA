#include<stdio.h>
int main()
{
    long int a,b,c;
while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF){
       if (a*a+b*b==c*c || c*c+a*a==b*b || c*c+b*b==a*a){
            printf("right");
        }
        else{
            printf("wrong");

        }
    }
    return 0;
}

#include<stdio.h>
int main()

{
    long int a,b,p,r,n,i;

    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++){
        scanf("%ld %ld",&a,&b);

        if(b>a || (a-b)%2!=0 )
            printf("impossible\n");
        else
        {

             p=a+b;
        r=a-b;
            printf("%ld %ld\n",p/2,r/2);
    }
    }
    }
    return 0;
}

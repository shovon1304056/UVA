#include<stdio.h>
int main()
{
    int i,r,n,x;
    i=0;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0 && n==0)
            break;
        else{
        i++;
        x=r/n;
        if(x<26)
            printf("Case %d : %d\n",i,x);
            else
                printf("Case %d: impssible\n",i);

    }
    }
    return 0;
}

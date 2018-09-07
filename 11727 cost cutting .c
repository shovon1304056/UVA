#include<stdio.h>
int main()
{

    int a,b,c,d,i;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
        scanf("%d %d %d",&a,&b,&c);


        if(a>b && b>c) {
            printf("case 1: %d",b);
        }
        else if( a<b && b<c){
            printf("case 2: %d",b);
        }
        else if((a>b && b<c) && (a<c)){
            printf("case 3: %d",a);
    }

    }
    return 0;
}


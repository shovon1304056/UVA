#include<stdio.h>
int main()
{
    long a,b;
    long result;
        while(scanf("%d%d",&a,&b)){
    if(a<b){
        printf("%ld-%ld=%d",b,a,b-a);
    }
}
return 0;
}

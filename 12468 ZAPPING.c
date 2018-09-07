#include<stdio.h>
int main()
{
    int a,b,c,d;
    d=0;
    c=0;

    while(scanf("%d %d",&a,&b)==2)
    {
    if(a==-1 && b==-1)
        break;
c=abs(a-b);
if(c>50)
{
    d=100-c;
    printf("%d\n",d);

}
else
    printf("%d\n",c);
    }
        return 0;
}

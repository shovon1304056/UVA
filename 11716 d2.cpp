#include<bits\stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int a,j,p,q,k,i;
float b;
while(scanf("%d",&p)==1)
{
    scanf("\r");
    for(i=1;i<=p;i++)
{
        gets(s);
    q=strlen(s);
    a=sqrt(q);
    b=sqrt(q);
    if(a==b)
    {
        for(j=0;j<a;j++)
{
            for(k=j;k<q;k+=a)
            {
              printf("%c",s[k]);
            }
}
    }
    else
        {printf("INVALID");}
    printf("\n");
}
}
    return 0;
}

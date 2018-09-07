#include<stdio.h>
int main()
{
    int i,j,c,n,a;
    char s[100];
    while(scanf("%d",&n)==1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d %s",&a,s);
            c=0;
            for(j=0;j<n;)
            {
                if(s[j]=='#')
                    j++;
                else
                {
                    c++;
                    j+=3;
                }
            }
            printf("Case %d: %d\n",i,c);
        }
        break;
    }
    return 0;
}


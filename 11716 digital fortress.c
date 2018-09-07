#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[10000];
    int n,i,ln,j,p1,k;
    float p2;
    while(scanf("%d",&n)==1)
    {
        scanf("\r");
        for(i=0;i<n;i++)
        {
            gets(s);
            ln=strlen(s);
            p1=sqrt(ln);
            p2=sqrt(ln);
            if(p1==p2)
            {
                for(j=0;j<p1;j++)
                {
                    for(k=j;k<ln;k=k+p1)
                    {
                        printf("%c",s[k]);
                    }
                }
            }
            else
                printf("INVALID");
 printf("\n");
        }

    }
    return 0;
}

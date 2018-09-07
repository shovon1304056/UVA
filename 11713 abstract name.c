#include<stdio.h>
int main()
{
    char s[100];
    char t[100];
    int i,l1,l2,n,j,c;
    while(scanf("%d",&n)==1);
    {
    for(j=1;j<=n;j++){
        gets(s);
        gets(t);
        l1=strlen(s);
        l2=strlen(t);
        if(l1!=l2)
            printf("No\n");
        else
        {c=0;
            for(i=0;i<l1;i++)
            {
                if(s[i]!=t[i])
                {
                    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'  || s[i]=='u' )
                      {

                       c++;
                      }
                    else if(s[i]==t[i])
                        {c++;}
                        else
                        c=100;
                }
            }
            if(c>=100)
                {printf("No\n");}
            else
                {printf("Yes\n");}
        }
    }
    }
        return 0;
            }

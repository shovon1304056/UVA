#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int i,ln,p=0;
    while(gets(s))
    {
                ln=strlen(s);
        for(i=0;i<ln;i++)
        {
           if(s[i]=='"')
           {
               p=p+1;
               if(p%2==1)
              printf("``");
               else
                    printf("''");
           }
           else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}

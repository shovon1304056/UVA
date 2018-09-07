
#include<stdio.h>
#include<string.h>

int main()
{
    long long i,l;
    char s1[1000],ch;
    while(scanf("%s",s1)==1)
    {
    scanf("%c",&ch);
        l=strlen(s1);
        for(i=l-1;i>=0;i--)
        {
            //s1[i]=s2[i];
   printf("%c",s1[i]);
        }
printf("%c",ch);
    }
    return 0;
}

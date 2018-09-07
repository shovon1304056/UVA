#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,p;
    char s1[1000],s2[1000],ch;
    while(scanf("%s",s1)==1)
    {
    scanf("%c",&ch);
        l=strlen(s1);
        for(i=l-1;i<=0;i--)
        {
            //s1[i]=s2[i];
   printf("%c",s1[i]);
        }
printf("%c",s1);
    }
    return 0;
}

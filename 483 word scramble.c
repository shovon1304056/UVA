#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,p;
    char s[1000];
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)

            s[i]=s[i]-7;

        printf("%s",s);

    }
printf("\n");
    return 0;
}

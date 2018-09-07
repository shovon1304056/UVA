#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,ln,c,p;
    while(gets(s))
    {
        c=0;
        p=1;
        ln=strlen(s);
        for(i=0;i<ln;i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                if(p==1)
                    c++;
                    p=0;
            }
                else
                    p=1;
            }
        printf("%d\n",c);
    }
    return 0;
}

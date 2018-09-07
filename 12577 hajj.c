#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
int i=0,length;
while(gets(s))
{
    i+=1;
    if(s[0]=='*')
        break;
    else
    {
        length=strlen(s);
        if(length==4)
        {
            printf("Case %d: Hajj-e-Akbar\n",i);
        }
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
    }
   // i++;
}
    return 0;
}

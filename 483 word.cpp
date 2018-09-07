
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,l,p;
    char s1[1000],ch;
    while(scanf("%s",s1)==1)
    {
    scanf("%c",&ch);
        l=strlen(s1);
        for(i=l-1;i>=0;i--)
        {
   printf("%c",s1[i]);
        }
printf("%c",ch);
    }
    return 0;
}


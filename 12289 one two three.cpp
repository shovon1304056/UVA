#include<bits\stdc++.h>
using namespace std;

int main()
{
    int i,j,l;
    char s[10],c;
    scanf("%d %c",&j,&c);

    while(j--)
    {

    gets(s);
    l=strlen(s);
    if(l==5)
        puts("3");
    else if((s[0]=='o' && s[1]=='n')||(s[0]=='o'&& s[2]=='e')||(s[1]=='n' && s[2]=='e'))
        printf("1\n");
    else
        printf("2\n");
    }

    return 0;
}

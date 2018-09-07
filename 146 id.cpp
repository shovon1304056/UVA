#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    char s[100];
    while(gets(s))
    {
        if(s[0]=='#')
            break;
        a=strlen(s);
        if(next_permutation(s,s+a)){
            printf("%s\n",s);
        }
        else
            printf("No Successor\n");
    }
    return 0;
}

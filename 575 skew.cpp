#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a,b,c,i,j,sum,l;
    char s[1000];
    while(gets(s))
    {
        l=strlen(s);
        sum =0;
        for(i=0;i<l;i++)
        {
            a=s[i]-'0';
            b=a*(pow(2,(l-i))-1);
            sum =sum+b;
        }
        if(sum==0)
       {break;}
       printf("%ld\n",sum);
    }
    return 0;
}

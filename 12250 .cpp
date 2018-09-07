#include<bits/stdc++.h>
using namespace std ;
int main()
{
    string a;
    int t=0;
    while(cin>>a)
    {
        t++;
        if(a=="#")
        {
            break;
        }
        else if(a=="HELLO")
        {
            printf("Case %d: ENGLISH\n",t);
        }
           else if(a=="HOLA")
        {
            printf("Case %d: SPANISH\n",t);
        }
           else if(a=="HALLO")
        {
            printf("Case %d: GERMAN\n",t);
        }
           else if(a=="BONJOUR")
        {
            printf("Case %d: FRENCH\n",t);
        }
           else if(a=="CIAO")
        {
            printf("Case %d: ITALIAN\n",t);
        }
           else if(a=="ZDRAVSTVUJTE")
        {
            printf("Case %d: RUSSIAN\n",t);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",t);
        }
    }
    return 0;
}

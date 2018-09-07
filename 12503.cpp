#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,n,i,j,k,p,t;
    string ss[1005],s;
    cin>>t;
     while(t--)
     {
         p=0;
         cin>>n;
         for(i=1;i<=n;i++)
         {
             cin>>s;
             if(s=="LEFT")
             {
                 ss[i]=s;
                 p--;
             }
             else if(s=="RIGHT")
             {
                 ss[i]=s;
                 p++;
             }
             else
             {
                 cin>>s;
                 cin>>a;
                 if(ss[a]=="LEFT")
                 {
                     ss[i]=ss[a];
                     p--;
                 }
                 else if(ss[a]=="RIGHT")
                 {
                     ss[i]=ss[a];
                     p++;
                 }
             }
         }
         cout<<p<<endl;
     }
     return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,n,d,e;
    while(1)
    {
        cin>>a>>b>>n;
        if(a==0 &&  b==0 && n==0)
        {
            break;
        }
        else
        {
  n=n%5;
            if(n==0)
                cout<<a<<endl;
            else if(n==1)
                 cout<<b<<endl;
            else if(n==2)
                 cout<<(b+1)/a<<endl;
            else if(n==3)
                 cout<<(1+a+b)/(a*b)<<endl;
            else if(n==4)
                 cout<<(1+a)/b<<endl;
        }
    }
    return 0;
}

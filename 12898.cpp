#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll i,j,n;
    ll a,b,c=0,p=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        c=a|b;
        p=a&b;
cout<<"Case"<<" "<<i<<":"<< " "<<c<<" "<<p<<endl;

    }return 0;
}

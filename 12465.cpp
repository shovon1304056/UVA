#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c,d,i,j,k,ans=0;
    while(1)
    {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        else
        {
            ans=0;
            c=abs(a-b);
            d=sqrt(c);
            for(i=1;i<=d;i++)
            {
                if(c%i==0)
                    ans=ans+2;
            }
            if(d*d==c)
                ans--;
                 cout<<ans<<endl;
        }
        //cout<<ans<<endl;
    }
     //cout<<ans<<endl;
    return 0;
}

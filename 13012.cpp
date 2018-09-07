#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,c;
    while(cin>>a)
    {
        c=0;
        for(int i=0;i<5;i++)
        { //c=0;
            cin>>b;
            if(a==b)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

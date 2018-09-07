#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,t,i,k,l,c,n;
    int p[100];
    cin>>a;
    for(i=1;i<=a;i++)
    {
        for(b=0;b<13;b++)
        {
            cin>>p[b];
        }
if(p[b]>0)

                cout<<"Set #"<<i<<":"<<" "<<"Yes"<<endl;
            else if(p[b]<=0)
            {
                 cout<<"Set #"<<i<<":"<<" "<<"No"<<endl;
            }

        }



    return 0;

}

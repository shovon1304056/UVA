#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a[100],i,j,p;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {

            cin>>a[j];
        }
        sort(a,a+n);
        p=(a[n-1]-a[0])*2;
        cout<<p<<endl;
    }
    return 0;
}

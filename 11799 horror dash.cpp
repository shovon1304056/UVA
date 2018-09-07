#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,t,a[100],i,j;
    cin>>t;
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>a[j];
            }
            sort(a,a+n);
            cout<<"Case "<<i<<": "<<a[n-1]<<endl;
        }
    }
    return 0;
}


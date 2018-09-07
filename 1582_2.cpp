#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1001];
    int n,a,b,i,j,k,l,sum=0,p=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        sum=0;
        p=0;
        cin>>c;
        l=strlen(c);
        for(j=0;j<l;j++)
        {

        if(c[j]=='O')
        {
            p++;
            sum=sum+p;
        }
else if(c[j]=='X')
{
    p=0;
    sum=sum+p;
}
        }
        cout<<sum<<endl;
    }
    return 0;
}


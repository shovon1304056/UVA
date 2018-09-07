#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[1001];
    int n,a,b,i,j,k,l,sum=0,p=0;
    cin>>n;
    for(j=0;j<n;j++)
    {
        sum=0;
        p=0;
        cin>>c;
        l=strlen(c);
        for(i=0;i<l;i++)
        {

        if(c[i]=='O')
        {
            p++;
            sum=sum+p;
        }
else if(c[i]=='X')
{
    p=0;
    sum=sum+p;
}
        }
        cout<<sum<<endl;
    }
    return 0;
}

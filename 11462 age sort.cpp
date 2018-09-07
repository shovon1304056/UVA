#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i ,a[100],j;
cin>>n>>endl;
while(n==1){

        if(n>=1)
        {
            for(i=1;i<=n;i++)
            {
                cin>>a[i];

            }
            sort(a,a+n);
            for(j=0;j<=n;j++)
                cout<<a[j]<<endl;
        }
        else
            break;
}
    return 0;
}

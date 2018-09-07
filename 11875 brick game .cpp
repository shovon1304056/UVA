#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t,n,i,j,a[100],p;
  cin>>t;
  {
      for(i=1;i<=t;i++)
      {
          cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
         p=n/2;
            sort(a,a+n);
       cout<<"Case "<<i<<": "<<a[p]<<endl;
      }
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b,n,m,p=0,t,r,s,i,j,k;
 while(scanf("%ld",&a)==1 )
 {
     p=0;
     if(a==0)
        break;
  else   if(a<10)
        {cout<<a<<endl;}
   else  if(a>9)
     {while(a>9)
     {
         p=0;
         while(a>0)
{
    p=p+a%10;
    a=a/10;
}
a=p;
         }
cout<<p<<endl;
}     }
//cout<<p<<endl;

   return 0;
}

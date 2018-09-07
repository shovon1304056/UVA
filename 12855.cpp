#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int in[10],ou[10];
    int a,b,c,i,j;
   while(scanf("%d %d %d %d %d ",&in[0],&in[1],&in[2],&in[3],&in[4])==5)
   {
     a=0;
     b=0;

     //cout<<a<<endl;
for(j=0;j<5;j++)
{
    cin>>ou[j];
    if(ou[j]==in[j])
        a=1;

}
//cout<<b<<endl;

if(a==0)
    cout<<"Y"<<endl;
else
    cout<<"N"<<endl;

    }
    return 0;
   }




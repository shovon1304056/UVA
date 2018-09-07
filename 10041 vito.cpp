#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a,b,c,sum,mid;
int s[5000];
scanf("%d",&t);
while(t--)
{
    int p=50000000;
            scanf("%d",&n);
if(n%2==0)
{
    mid=n/2;
}
else{mid=(n/2)+1;}
            for(i=0;i<n;i++)
            {
                scanf("%d",&s[i]);
            }
            sort(s,s+i);

            for (int k=0;k<n;k++)
            {    sum=0;
                for(int j=0;j<n-1;j++)
            {
                sum=sum+abs(s[j]-s[j+1]);
            }
           mid=min(mid,sum);
           }
           printf("%d\n",mid);
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a,b,c,sum,mid;
int s[30010];
scanf("%d",&t);
while(t--)
{
            scanf("%d",&n);
if(n%2==0)
{
    mid=n/2;
}
else
{
    mid=(n/2)+1;
}
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
           c=min(mid,sum);
           }
           printf("%d\n",c);
}
return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

    int n;
    map<int,int>m;
    vector<int>v;
int main()
{
    while(scanf("%d",&n)==1)
    {
        if(m[n]==0)
            v.push_back(n);
        m[n]++;
    }
    for(int i=0;i<v.size();i++)
    {
        printf("%d %d\n",v[i],m[v[i]]);
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,t,i,j,k;
    vector<string>v;
    map<string,int>mp;
    string s,a;
    cin>>n;
    getchar();
   while(n--)
       {
           cin>>s;
           getchar();
           getline(cin,a);
           if(mp[s]==1)
           {  v.push_back(s);
               mp[s]++;
               cout<<mp[s]<<endl;
           }
           else if(mp[s]==0)
           {
                v.push_back(s);
               mp[s]++;
              cout<<mp[s]<<endl;
           }
       }
       sort(v.begin(),v.end());
       for(i=0;i<v.size();i++)
       {
           string c=v[i];
           cout<<""<<c<<" "<<mp[c]<<endl;
    }
    v.clear();
       return 0;
}

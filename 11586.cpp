#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,a,b,m=0,f=0,i;
    cin>>n;
    getchar();
    for(i=1;i<=n;i++)
    {
        //string s;
        m=0,f=0;

       getline(cin,s);

        a=s.size();
       // cout<<a<<endl;
        for(b=0;b<a;b++)
        {
            if(s[b]=='M')
                {m++;
                //cout<<m<<endl;
                }
            else if(s[b]=='F')
                {f++;
                //cout<<f<<endl;
                }
        }
        if(m==f  && a>2)
            cout<<"LOOP"<<endl;
        else
             cout<<"NO LOOP"<<endl;
    }
    return 0;
}

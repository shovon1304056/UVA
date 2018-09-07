
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,p,q,n;
    string a,b,r;
    while(cin>>n)
    {
        getchar();
        for(i=0;i<n;i++)
        {
            getline(cin,a);
            getline(cin,b);

        }
        cin>>q;
        getchar();
      while(q--)
        {
          getline(cin,r);
           //for(i=0;i<n;i++)
            if(a==r)
            {
                cout<<b<<endl;

            }
            }
        }

    return 0;
}

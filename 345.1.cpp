#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c=0,d,i=0,j=0,k=0;
    cin>>a>>b;
    if(a==0 || b==0)
        cout<<"0"<<endl;

    else
    {while(a!=0 && b!=0)
    {
        if(a<b)
        {
            a=a+1;
            b=b-2;
    i++;
        }
        else if(a>b)
        {
            a=a-2;
            b=b+1;
            j++;
        }
        else if(a==b && a>1 && b>1)
        {
            a=a+1;
            b=b-2;
            k++;
        }


     else     if(a==0 || b==0)
        {
            break;

    }
    else if(a==1 && b==1)
            break;

    }
      //cout<<"0"<<endl;
      cout<<i+j+k<<endl;
    }

    return 0;
}

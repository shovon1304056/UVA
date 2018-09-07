#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long a,b,t=8,c=0;
    double t1;
    while(1)
    {
    t1=sqrt((t*t+t)/2);
     b=t1;

     if(b==t1)
     {
         printf("%10lld %10lld\n",b,t);
     c++;
     }
     if(c==10)
     {break;
     t++;}
    }
    return 0;
}

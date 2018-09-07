#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n,m,o,k;
        while(scanf("%lld",&n)==1){
        m=1;
        o=1;
        while(1){
            if(m<n){
                m=(m*10)+1;
                o++;
            }
            k=m%n;
            if(k==0)
                break;
            else
                m=k;
        }
        printf("%lld\n",o);
        }
    return 0;
}


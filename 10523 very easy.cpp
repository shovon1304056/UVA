#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,sum,n,a;
    while(scanf("%d %d",&n,&a)==2)
    { sum=0;
        for(i=1;i<=n;i++)
        {sum=0;

            j=i*pow(a,i++);
           sum=j;
           //printf("%d",sum);
        }
                for(i=1;i<=sum;i++)

 //sum=j;
        printf("%d",sum);
    }
    return 0;
}

#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
 long   int n,i ,a[2000005],j,k;
while(scanf("%ld",&n)==1){
        if(n==0)
            break;
            if(n>0){
            for(i=0;i<n;i++)
            {
                scanf("%ld",&a[i]);
            }
            sort(a,a+n);
            for(j=1;j<=n;j++){
                printf("%ld",a[j-1]);
                printf(" ");
        }
        printf("\n");
}
}
    return 0;
}

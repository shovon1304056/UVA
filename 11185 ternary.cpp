#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    long int f,d;
     long int b[1001];
 while(scanf("%ld",&d)==1)
    {
      if(d<0)
    {
        break;
    }
      else if(d==0)
    {//break;
        printf("0\n");
    }
    else
    {
        f=d;
        if(d>0){
        for(i=1;f!=0;i++)
        {
b[i]=f%3;

f=f/3;
    }}
    for(j=i-1;j>0;j--)
        {printf("%ld",b[j]);
       }
        printf("\n");
    }}
    return 0;
}

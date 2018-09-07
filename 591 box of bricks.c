#include<stdio.h>
int main()
{
    int a,b,c,n,i,j,x[100];

  while(  scanf("%d",&n)==1 && n!=0){
        //c=0;
         //a=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        for(i=0;i<n;i++)
            a=0;
        a=a+x[i];
        b=a/n;
for(i=0;i<n;i++){
c=0;
if(x[i]>b)
        c=c+(x[i]-b);
    }

    }
printf("%d",c);
  }
    return 0;
}


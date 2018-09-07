#include<stdio.h>
int main()
{
    int n,i,j,p,s1,s2,s3;
    j=1;
    while(scanf("%d",&n)){
            s1=0;
            s2=0;
    if(n==0){
        break;
}
    else{
        for(i=1;i<=n;i++)
        {
    scanf("%d",&p);
                        if(p==0){
                            s1=s1+1;
                            }
                                else{
                                s2=s2+1;
                                }
                    }
    s3=s2-s1;
                    printf("Case %d: %d\n",j++,s3);
    }
    }
return 0;
}

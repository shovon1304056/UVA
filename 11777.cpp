#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t1,t2,f,c1,c2,c3,att,avg,i,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %d %d %d",&t1,&t2,&f,&att,&c1,&c2,&c3);

    if(c1>=c2 && c3>=c2)
        {
            avg=(c1+c3)/2;
        }
     else    if(c2>=c1 && c3>=c1)
        {
            avg=(c2+c3)/2;
        }
        else if(c2>=c3 && c1>=c3)
        {
            avg=(c2+c1)/2;
        }

        sum=t1+t2+f+att+avg;

        if(sum>=90)
        {
             printf("Case %d: A\n",i);
        }
        else if(sum>=80)
        {
             printf("Case %d: B\n",i);
        }
        else if(sum>=70)
        {
             printf("Case %d: C\n",i);
        }
        else if(sum>=60)
        {
            printf("Case %d: D\n",i);
        }
        else if(sum<60)
        {
             printf("Case %d: F\n",i);
        }
    }
    return 0;
}

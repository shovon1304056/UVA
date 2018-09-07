#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int p;
    {
        while(scanf("%lf",&n)==1)
        {
            for(p=1;;p++)
            {
                if((p%2)==1)
                {
                    n=n/9;}
                    else
                        n=n/2;

            if(n<=1)
            {
                break;
            }
                }
                  if((p%2)==1)
            printf("Stan wins.\n");
        else
            printf("Ollie wins.\n");

            }

        }

    return 0;
}

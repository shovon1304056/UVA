#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{int n,i;
       while(scanf("%d", &n)==1){
            if(n==0)
                  break;
                  else{
                       i=(log (n))/(log(2));
            printf("%d\n", i);
            }
       }
            return 0;
            }


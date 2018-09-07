#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,p;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;
        else if(x1==x2 && y1==y2)
        {p=0;
            printf("%d\n",p);
        }
        else if(x1==x2 || y1==y2 || abs(x1-x2)==abs(y1-y2))
        {
            p=1;
            printf("%d\n",p);
        }
        else
            {p=2;
            printf("%d\n",p);
            }

    }
    return 0;
}

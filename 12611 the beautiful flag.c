#include<stdio.h>
int main()
{
    int t,r,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%d",&r);
        printf("Case %d:\n",i);
        printf("%d %d\n",-(r*45)/20,(r*30)/20);
           printf("%d %d\n",(r*55)/20,(r*30)/20);
              printf("%d %d\n",(r*55)/20,-(r*30)/20);
                 printf("%d %d\n",-(r*45)/20,-(r*30)/20);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,n;
    char s[1000];
scanf("%d",&n);

  //
  for(i=0;i<n;i++)
  {
      //b=0;
      scanf("%s-%d",s,&a);
      b=0;
      for(i=0;s[i];i++)
      {
          b=b*26+s[i]-'A';

          if(a-b<=100 && a-b>=-100)
            printf("nice\n");
          else
            printf("not nice\n");
      }
  }


        return 0;
    }


#include<stdio.h>

int main()
{
    int f,m,n,i,j;

    char a[100][100],b[100][100];
    for(f=1;m!=0 && n!=0;f++)
    {
      scanf("%d %d",&n,&m);
       getchar( );
       if(m==0 && n==0)
       {
           break;
       }
       for(i=0;i<n;i++)
       {

           for(j=0;j<m;j++)
           {
               scanf("%c",&a[i][j]);
           }

     if(i==n-1)
     {
         break;
     }

     getchar( );
       }

       for(i=0;i<n;i++)
       {

           for(j=0;j<m;j++)
           {
               char count=48;
               if(a[i][j]=='*')
               {
                  b[i][j]='*';
               }

               else if(a[i][j]=='.')
               {
                 int p,q;
                 for(p=i-1;p<=i+1;p++)
                 {
                     for(q=j-1;q<=j+1;q++)
                     {
                         if(a[p][q]=='*')
                         {
                             count++;
                         }
                         else
                         {
                             continue;
                         }
                     }
                 }
                  b[i][j]=count;

               }



           }


     if(i==n-1)
     {
         break;
     }


       }

      printf("\nField #%d :\n",f);
       for(i=0;i<n;i++)
       {

           for(j=0;j<m;j++)
           {
               printf("%c",b[i][j]);
           }

     printf("\n");
     if(i==n-1)
     {
         break;
     }


       }



    }

}


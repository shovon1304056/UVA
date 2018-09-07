#include<stdio.h>
int main()
{
    int n,i,l,j;
    int p;
     char a[100];
    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {
        gets(a);
        l=strlen(a);
        p=0;
        for(i=0;i<l;i++)
        {
            if((a[i]=='a')||(a[i]=='d')||(a[i]=='g')||(a[i]=='j')||(a[i]=='m')||(a[i]=='p')||(a[i]=='t')||(a[i]=='w')||(a[i]==' '))
      {p+=1;}
      else if((a[i]=='b')||(a[i]=='e')||(a[i]=='h')||(a[i]=='k')||(a[i]=='n')||(a[i]=='q')||(a[i]=='u')||(a[i]=='x'))
        {p+=2;}
        else if((a[i]=='c')||(a[i]=='f')||(a[i]=='i')||(a[i]=='l')||(a[i]=='o')||(a[i]=='r')||(a[i]=='v')||(a[i]=='y'))
        {p+=3;}
        else if((a[i]=='s')||(a[i]=='z'))
        {p+=4;}
        }
        printf("Case #%d: %d\n",j,p);
    }

    return 0;
}

#include<stdio.h>
int main()
{
    char s[100];
    char t[100];
    int i,ln;
    while(gets(s))
    {
        ln=strlen(s);
        for(i=0;i<ln;i++)
        {
            if(s[i]=='A' || s[i]=='B' || s[i]=='C')
                t[i]='2';
            else if(s[i]=='D' || s[i]=='E' || s[i]=='F')
                t[i]='3';
         else    if(s[i]=='G' || s[i]=='H' || s[i]=='I')
                t[i]='4';
               else     if(s[i]=='J' || s[i]=='K' || s[i]=='L')
                t[i]='5';
               else     if(s[i]=='M' || s[i]=='N' || s[i]=='O')
                t[i]='6';
                else    if(s[i]=='P' || s[i]=='Q' || s[i]=='R' || s[i]=='S')
               t[i]='7';
          else    if(s[i]=='T' || s[i]=='U' || s[i]=='V')
                t[i]='8';
                  else  if(s[i]=='W' || s[i]=='X' || s[i]=='Y' || s[i]=='Z')
                t[i]='9';
                else if(s[i]=='-')
                    t[i]='-';
                  else if(s[i]=='0')
                    t[i]='0';
                      else if(s[i]=='1')
                    t[i]='1';
                         printf("%c",t[i]);
        }

          printf("\n");
    }
    return 0;
}

#include<stdio.h>

int main()
{
    char s[100];
    int i,s1length,s2length;
    while(gets(s) && s!=".")
    {
        int max=1;
        int s1length=s2length;
        for(int i=1;i<s1length;i++)
            while(s[i]!=s[i%max])
                max++;
        if(s1length%max!=0)
           printf("1\n");
        else
            printf("%d",s1length/max);
    }
}

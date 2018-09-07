
#include<stdio.h>

int main(){
char s[10];
    int t,n,a,i;
    scanf("%d",&t);
    while(t--){
        scanf("%s-%d",s,&n);
        a=1;
        for(i=0;s[i];i++)
            a=a*26+s[i]-'A';
        if(n-a<=100 && n-a>=-100) puts("nice");
        else puts("not nice");
    }
}

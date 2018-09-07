  #include<stdio.h>
int main()
{
    int a,b,c,d,l,x,i,p;

    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
 p=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
            break;
         if(a!=0 || b!=0 || c!=0 || d!=0 || l!=0)
        {
            for(i=0;i<=l;i++){
            x=(a*i*i)+b*i+c;
        if((x%d)==0){
    p++;

            }
    }

    }
    printf("%d\n",p);
}
return 0;
}


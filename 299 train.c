#include<stdio.h>
int main()
{
    int a,n,i,j,c,p,k;
    int temp[101];

    while(scanf("%d",&a)==1)
    {
        for(k=1;k<=a;k++)
        {
            c=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)



              scanf("%d",&temp[i]);

                for(i=1;i<n;i++)


               for(j=n-1;j>=i;j--)



                    if(temp[j-1]>temp[j])
                    { c++;
                        p=temp[j-1];
                        temp[j-1]=temp[j];
                        temp[j]=p;
                        //c++;
                    }
                                    printf("Optimal train swapping takes %d swaps.\n",c);


}
    }
    return 0;
}

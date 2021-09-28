#include<stdio.h>
int main()
{
    int k,i,t,n,j,pos;
    scanf("%d",&t);
    for(k=0;k<t;t++)
    {
        scanf("%d",&n);
        int a[n],temp,c=0,s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            pos=i;
            for(j=i+1;j<n;j++)
            {
                if(a[pos]>a[j])
                    pos=j;
                c++;
            }
            if(pos!=i)
            {
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
                s++;
            }
        }
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\ncomparisons - %d",c);
        printf("\nshifts - %d",s);
    }
}
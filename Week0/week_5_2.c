#include<stdio.h>
int main()
{
    int i,j,k,key,n,t,temp,flag,c;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        int a[n];
        flag=0;
        c=0;
        f
        scanf("%d",&key);
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i]+a[j])==key)
                {
                    if(c!=0)
                        printf(",");
                    printf("%d %d",a[i],a[j]);
                    c++;
                    flag=1;
                }
            }
        }if(flag==0)
            printf("No such pair exists.");
    }

}

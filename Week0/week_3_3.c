#include<stdio.h>
int main()
{
    int k,i,t,n,j,pos;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        int a[n],temp,flag=0;
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
            }
            if(pos!=i)
            {
                temp=a[i];
                a[i]=a[pos];
                a[pos]=temp;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]==a[i+1]){
                flag=1;
                break;
        }
        }
        if(flag==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
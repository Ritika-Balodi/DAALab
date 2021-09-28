#include<stdio.h>
int main()
{
    int i,j,m,n,flag;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    
}
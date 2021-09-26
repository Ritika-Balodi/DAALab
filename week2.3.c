#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,n,T;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        int arr[n],c=0,key;
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        scanf("%d",&key);
        for(j=0;j<n-1;j++)
        {
            for(k=j;k<n;k++)
            {
                if(abs(arr[j]-arr[k])==key)
                {
                    c=c+1;
                }
            }
        }
        printf("%d\n",c);
    }
}

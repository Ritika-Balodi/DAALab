#include<stdio.h>
int main()
{
    int T,n,key,i,j,k;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d",&n);
        int arr[n],c=0;
        for(j=0;j<n;j++)
            scanf("%d",&arr[j]);
        scanf("%d",&key);
        for(k=0;k<n;k++)
        {
                if(key==arr[k])
                    c=c+1;
                if(key<arr[k])
                    break;
        }
        printf("%d-%d\n",key,c);
    }
}

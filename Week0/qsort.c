#include<stdio.h>

    int partition(int arr[],int l,int r)
    {
        int pivot=arr[r],temp,j;
        int i=(l-1);
        for(j=1;j<=r-1;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[i+1];
        arr[i+1]=arr[j];
        arr[j]=temp;
        return (i+1);
    }
    void qsort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p;
        p=partition(arr,l,r);
        qsort(arr,l,p-1);
        qsort(arr,p+1,r);
    }
}

int main()
{
    int i,k,t,n;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,0,n-1);
        printf("Sorted array:\n");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);

        }
    }
}
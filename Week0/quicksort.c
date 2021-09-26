#include<stdio.h>
void quicksort(int arr,int lb,int ub)
{
    if(lb<ub)
    {
        int p=partition(arr,lb,ub);
        quicksort(arr,lb,p-1);
        quicksort(arr,p+1,ub);
    }
}
int partition(int arr[],int lb,int ub)
{
    int pivot=lb,start=lb-1,end=ub,temp,j;
    while(start<end)
    {
        while(arr[start]<=arr[pivot])
            start++;
        while(arr[end]>arr[pivot])
            end--;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    /*for(j=1;start<=end-1;j++)
    {
        if(arr[j]<arr[pivot])
        {
            start++;
            temp=arr[start];
            arr[start]=arr[j];
            arr[j]=temp;
        }
    }*/
    temp=arr[start+1];
    arr[start+1]=arr[j];
    arr[j]=temp;
    return start+1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);

}

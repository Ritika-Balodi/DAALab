#include<stdio.h>
int main()
{
    int sum=0,i,j,n,temp,max,k;
    printf("Enter the number of job:");
    scanf("%d",&n);
    int profit[n],dl[n];
    printf("Enter the values of profit:\n");
    for(i=0;i<n;i++)
        scanf("%d",&profit[i]);
    for(i=0;i<n;i++)
        scanf("%d",&dl[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(profit[i]<profit[j])
            {
                temp=profit[i];
                profit[i]=profit[j];
                profit[j]=temp;
                temp=dl[i];
                dl[i]=dl[j];
                dl[j]=temp;

        }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\n",profit[i]);
    max=dl[0];
    for(i=1;i<n;i++)
    {
        if(dl[i]>max)
        {
            max=dl[i];
        }
    }
    printf("\nMaximum deadline:%d",max);
    for(i=max,k=0;i>0;i--,k++)
    {
        for(j=0;j<n;j++)
        {
            if(max<=dl[j]){
                printf("if profit:%d\n",profit[j]);
                sum=sum+profit[j];
                dl[j]=0;
                break;
            }
        }
    }
    printf("\nThe optimal solution is %d",sum);
}

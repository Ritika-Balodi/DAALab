#include<stdio.h>
int main()
{
    int i,n,t,c=0,num,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the number to be found:");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
            flag=1;
        c++;
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("The number is found.\n");
    else
        printf("The number is not found.\n");
    printf("Number of comparisons:%d",c);
}

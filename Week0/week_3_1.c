#include<stdio.h>
int main()
{
    int n,i,j,t,k,large;
    scanf("%d",&t);
    for(k=0;k<t;k++){
    scanf("%d",&n);
    int a[n],c=0,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        large=a[i];
        j=i-1;
        while(j>=0 && large<a[j])
        {
            c++;
            a[j+1]=a[j];
            s++;
            --j;
        }
        if(i!=n-1)
            s++;
        a[j+1]=large;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\ncomparisons = %d",c);
    printf("\nshifts = %d",s);
    }
}
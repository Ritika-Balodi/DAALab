#include<stdio.h>
int main()
{
   int T,i,j,k,l,n,sum;
   scanf("%d",&T);
   for(l=0;l<T;l++)
   {
       scanf("%d",&n);
       int arr[n],c=0,flag=0;
       for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
       for(i=0;i<n-2;i++)
       {
           for(j=i+1;j<n-1;j++)
           {
               sum=arr[i]+arr[j];
               for(k=j+1;k<n;k++)
               {
                   if(sum==arr[k])
                   {
                        printf("%d,%d,%d\n",i+1,j+1,k+1);
                        flag=1;
                        break;
                   }
               }
           }
       }

       if(flag==0)
        printf("No sequence found.");
   }
}

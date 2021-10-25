#include<stdio.h>
#include<stdlib.h>
int lcs(char X[20],char Y[20],int m,int n)
{
    if(m==0||n==0)
        return 0;
    if(X[m-1]==Y[n-1])
        return 1+lcs(X,Y,m-1,n-1);
    else
        return max(lcs(X,Y,m,m-1),lcs(X,Y,m-1,n));
}
int main()
{
    int m,n,res;
    scanf("%d%d",&m,&n);
    char X[20],Y[20];
    scanf("%s%s",&X,&Y);
    res=lcs(X,Y,m,n);

}
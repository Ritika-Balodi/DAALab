#include<iostream>
using namespace std;
int main()
{
    int n,i,c,j,k,big,t;
    cin>>t;
    for(k=0;k<t;k++){
    cin>>n;
    big=0;
    char arr[n],ch;
    cout<<"Enter the array of elements:\n";
    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(big<=c)
        {
            big=c;
            ch=arr[i];
        }
    }
    if(big>1)
    {

        cout<<ch<<"-"<<big;
    }
    else
        cout<<"No duplicate element.";
    }
}

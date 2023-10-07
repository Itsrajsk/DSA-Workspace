#include<bits/stdc++.h>
using namespace std;
void RecBubSor(int arr[],int n)
{
    if(n==1)
    {
        return;
    }
    int didswap=0;
    for(int i=0;i<n-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
        didswap=1;
    }
    if(didswap==0)
    {
        return;
    }
    RecBubSor(arr,n-1);
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=10;
    cout<<"Before Sorting Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    RecBubSor(arr,n);
    cout<<"\nAfter Sorting Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
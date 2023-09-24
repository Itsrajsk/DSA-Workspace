#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        int start =1;

        if(i%2==0)
        {
            start=0;
        }
        else
        {
            start=1;
        }
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
    
    
}
int main()
{
    int t;  // This is For Testcases
    cout<<"Enter Number How Many TestCases You Have To Do?"<<endl;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;  // Entering Rows
        cout<<"Enter Rows: "<<endl;
        cin>>n; 
        pattern(n);  // Calling Function
    }
    
    return 0;
}
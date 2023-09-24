#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i<=n; i++)  // Outer Loops For Rows
    {
        for (int  j = 1; j<=i; j++) // Inner Loops For Printing The Rows Columnwise
        {
            cout<<j<<" ";
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
        pattern1(n);  // Calling Function
    }
    
    return 0;
}
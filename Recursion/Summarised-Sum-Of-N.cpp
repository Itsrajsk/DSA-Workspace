#include<bits/stdc++.h>
using namespace std;
int Add(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + Add(n - 1);
}

int main()
{
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    Add(n);
    cout<<Add(n)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void Add(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    Add(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    Add(n,0);
    return 0;
}
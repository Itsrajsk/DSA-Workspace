#include<bits/stdc++.h>
using namespace std;
void name(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"RAM"<<endl;
    name(i+1,n);
}
int main()
{
    int n;
    int i=1;
    cout<<"Enter Number : "<<endl;
    cin>>n;
    name(i,n);
    return 0;
}
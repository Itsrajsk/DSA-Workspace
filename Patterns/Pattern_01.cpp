#include<bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i<n; i++)
    {
        for (int  j = 0; j<n; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
int main()
{
    pattern1(5);
    return 0;
}
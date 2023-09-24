#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int spaces = 2 * n - 2;
    for (int i = 1; i <=2*n-1; i++)
    {
        // Stars
        int stars = i;
        if(i>n)
        {
            stars=2*n-i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= spaces; j++)
        {
            cout<<" ";
        }
        // Stars
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
            spaces -= 2;
        else
            spaces += 2;
    }
}
int main()
{
    int t; // This is For Testcases
    cout << "Enter Number How Many TestCases You Have To Do?" << endl;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n; // Entering Rows
        cout << "Enter Rows: " << endl;
        cin >> n;
        pattern(n); // Calling Function
    }

    return 0;
}
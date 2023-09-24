#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
        int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j ;
        }
        // Space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // Numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j ;
        }
        cout << endl;
        space -= 2;
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
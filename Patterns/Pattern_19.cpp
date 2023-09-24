#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int initS = 0;
    // 1st Half
    for (int i = 0; i < n; i++)
    {

        // Stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < initS; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        initS += 2;
        cout << endl;
    }
    // 2nd Half
    initS = 2 * n - 2;
    for (int i = 1; i <= n; i++)
    {
        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Spaces
        for (int j = 0; j < initS; j++)
        {
            cout << " ";
        }

        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        initS -= 2;
        cout << endl;
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
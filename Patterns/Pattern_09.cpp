#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

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
        pattern1(n); // Calling Function
        pattern2(n);
    }

    return 0;
}
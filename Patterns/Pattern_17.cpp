#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // Characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakpoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
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
        pattern(n); // Calling Function
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    int RevNum = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        RevNum = (RevNum * 10) + ld;
        n = n / 10;
    }
    if (dup == RevNum)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}
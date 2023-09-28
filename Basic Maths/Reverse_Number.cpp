#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    int RevNum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;
        RevNum = RevNum * 10 + ld;
    }
    cout<<"\n"<<RevNum;
    return 0;
}
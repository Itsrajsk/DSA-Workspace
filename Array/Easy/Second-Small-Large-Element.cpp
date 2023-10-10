#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
/*
void getelements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1;
    }
    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "Second Smallest Element Is " << small << endl;
    cout << "Second largestṇ Element Is " << large << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<" --> "<<arr[i]<<endl;
    }
    getelements(arr, n);
    return 0;
}
*/

// Better Approach
/*
void getelements(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1 << " " << -1;
    }
    int small = INT_MAX;
    int ssmall = INT_MAX;
    int large = INT_MIN;
    int slarge = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < ssmall && arr[i] != small)
        {
            ssmall = arr[i];
        }
        if (arr[i] > slarge && arr[i] != large)
        {
            slarge = arr[i];
        }
    }
    cout << "Second Smallest Is " << ssmall << endl;
    cout << "Second Largest Is " << slarge << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getelements(arr, n);
    return 0;
}
*/

// Optimal Approach

int ssmall(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }
    int small = INT_MAX;
    int ssmall = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            ssmall = small;
            small = arr[i];
        }
        else if (arr[i] < ssmall && ssmall != small)
        {
            ssmall = arr[i];
        }
    }
    return ssmall;
}

int slarge(int arr[], int n)
{
    if (n < 2)
    {
        return -1;
    }
    int large = INT_MIN;
    int slarge = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            slarge = large;
            large = arr[i];
        }
        else if (arr[i] > slarge && slarge != large)
        {
            slarge = arr[i];
        }
    }
    return slarge;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int large = slarge(arr, n);
    int small = ssmall(arr, n);
    cout << "Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nSmallest Element : " << small << endl;
    cout << "Largest Element : " << large << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach

/*int sortarr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}

int main()
{
    vector<int> arr = {5, 9, 3, 5, 1, 8, 6};
    int n = 7;
    cout << "Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nLargest Element In Array: " << sortarr(arr) << endl;
    return 0;
}
*/

// Recursive Approach

int Largest_Element(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nLargest Element In The Array : " << Largest_Element(arr, n) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void InsertSort(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    InsertSort(arr, i + 1, n);
}
int main()
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    InsertSort(arr, 0, n);
    cout << "\nAfter Sorting Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
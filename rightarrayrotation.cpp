#include <bits/stdc++.h>
using namespace std;

void rightrotatearray(int arr[], int n, int d)
{
    int temp;
    d=d%n;
    // incase d is greater than size of array

    for (int i = 0; i < d; i++)
    {
        temp = arr[n-1];
        for (int j = n-1; j>0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8,9};
    int d = 3;
    int n = sizeof(arr) / sizeof(arr[0]);

    rightrotatearray(arr, n, d);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}

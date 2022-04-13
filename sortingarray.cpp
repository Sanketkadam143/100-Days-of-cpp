#include <bits/stdc++.h>
using namespace std;

void sortarr(int array[], int n)
{

    for (int i = 0; i < n-1; i++)
    {

        for (int j = i + 1; j < n-1; j++)
        {

            if (array[j] < array[i])
            {
                swap(array[j], array[i]);
            }
        }
    }
}

int main()
{
    int array[] = {9, 8, 7, 3, 4, 2};
    int n = sizeof(array) / sizeof(array[0]);
    sortarr(array, n);
    for (int i = 0; i < 6; i++)
    {
        cout << array[i];
    }
 
    return 0;
}
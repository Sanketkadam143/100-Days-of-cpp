// merging two unsorted arrays

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[] = {4,3,6,5}, arr2[] = {8,2,4,1};
    int a = sizeof(arr1) / sizeof(arr1[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
    int result[a + b];
    int k = 0;
    for (int i = 0; i < a ; i++)
    {
        result[k] = arr1[i];
        k++;
    }

    for (int i = 0; i < b ; i++)
    {
        result[k] = arr2[i];
        k++;
    }

    for (int i = 0; i < a+b; i++)
    {
     cout<<result[i]<<endl;
    }

   return 0; 
}
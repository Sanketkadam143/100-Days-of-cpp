#include <iostream>
#include <string>
#include <vector>

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{

    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    int n, a, b, c,d;
    cin >> n;
    int arr[n];
    int newarr[] = {};
    int arrsize;
    vector<int> vec = {}, newvec = {};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    { 
        vec.clear();b=0; 
        for (int k = j + 1; k < n; k++)
        {
            if (arr[k-1] < arr[k] && b<arr[k])
            {
               a = arr[k-1];
                b = arr[k];
                c = gcd(a, b);

                if (c == 1)
                {

                    vec.push_back(b);
                    
                    
                    
                }
                
            }
        }
        auto it = vec.insert(vec.begin(), a);
        for (int l = 0; l < vec.size(); l++)
        cout << vec[l] << " ";
    cout << endl;

        newvec.push_back(vec.size());
    }

    cout << "\nMax Element = "
         << *max_element(newvec.begin(), newvec.end());

    return 0;
}

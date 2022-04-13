
#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str)
{
   

    replace(str.begin(), str.end(), ',', ' ');
    vector<int> integers;
    stringstream ss(str);
    int digits;

    while (ss >> digits)
    {
        integers.push_back(digits);
    }

    return integers;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}
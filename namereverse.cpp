#include <bits/stdc++.h>
using namespace std;

int main()
{

    string word, a = "My name is Sanket";
    stringstream ss(a);

    while (ss >> word)
    {
        if (word != "My" && word != "is")
        {
            int n = word.length();
          
            for (int i = 0; i <= (n-1) / 2; i++)
            {
                swap(word[i], word[n - i - 1]);
            }
        }

        cout << word << " ";
    }

    return 0;
}
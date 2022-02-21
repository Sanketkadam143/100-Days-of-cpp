// palindrome is a word or sentence that spelled the same way both forward and backward.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;

    cout << "Enter the number or string character ";
    getline(cin,s);
    n = s.length();

    bool ispal = true;

    for (int i = 0; i <= n/2; i++)
    {
        if (s[i] == s[n-1])
        {
           --n;
        }
        else
        {
            ispal = false;
            break;
        }
    }
    ispal==false ? cout<<"Its not a palindrome": cout << "Its  a palindrome";
 
    return 0;
}
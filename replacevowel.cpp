//replace vowels from the given string with underscore.no of underscore is define by the position of vowel in the string

#include <iostream>
#include <string>
using namespace std;

string replace(string s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            if (i > 5)
            {
                ans = ans + "_____";
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    ans = ans + '_';
                }
            }
        }
        else
        {
            ans = ans + s[i];
        }
    }
   return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<replace(s);
    return 0;
}



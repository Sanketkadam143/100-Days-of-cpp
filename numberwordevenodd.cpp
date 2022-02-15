//printing character of digit if digit less than 9 else determine odd or even

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    string words[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   

    for (int i = a; i >= a && i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            
            cout << words[i-1]<<endl;
            
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even"<<endl;
                
            }
            if (i%2!=0)
            {
                cout << "odd"<<endl;
               
            }
        }
    }
    return 0;
}
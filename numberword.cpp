
//printing character number if digit is less than 9 else greater than 9
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string word[9]={"one","two","three","four","five","six","seven","eight","nine"};

if (n>=1 && n<=9)
{
  cout<<word[n-1] ;
}
else
{
    cout<<"Greater than 9"<<endl;
}

return 0;
}
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
  n=--n;
  cout<<word[n] ;
}
else
{
    cout<<"Greater than 9"<<endl;
}

return 0;
}
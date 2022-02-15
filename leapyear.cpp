
//Determining whether the given year is leap year or not

#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the year";
    cin>>a;
if (a%400==0)
{
    cout<<"Its a leap year";
}
else if (a%4==0,a%100!=0)
{
    cout<<"Its a leap year";
}
else
{
    cout<<"Its not a leap year";
}

  
    return 0;
}
  
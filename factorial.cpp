//program to find factorial

#include<iostream>
using namespace std;

int main()
{
    int n,fac=1;
    cin>>n;

    for (int i = n; i>1; i--)
    {
        fac=fac*i;
    }
    
    cout<<fac;

    return 0;
}
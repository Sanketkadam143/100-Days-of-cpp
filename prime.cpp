//determine whether no is prime or not
#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the number";
    cin>>n;
    bool isprime=true;
  if (n==0||n==1)
  {
    cout<<"Its neither composite nor prime number";
  }
  for ( i=2; i<=n/2; i++)
  {
   if(n%i==0){
			cout<<"not prime number"<<endl;
      isprime=false;
      break;
      }
  }
  if ( isprime==true)
  {
    cout<<"is prime number"<<endl;
  }
  
 return 0;
}
  
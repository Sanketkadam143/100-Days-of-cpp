//Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

#include<iostream>
using namespace std;

int max(int a,int b,int c,int d)
{
  int largest=0;
  if (a>b && a>c && a>d)
  {
      largest=a;
  }
  else if (b>c && b>d)
  {
      largest=b;
  }
  else if(c>d)
  {
      largest=c;
  }
  else{
      largest=d;
  }
  
  
  return largest;
  
}
int main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<max(a,b,c,d);
return 0;
}
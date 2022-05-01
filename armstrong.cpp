// Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,temp,r,size;
    cin>>n>>size;
    temp=n; 

while (n>0)
{
   r=n%10;
   sum+=pow(r,size);
   n=n/10;

}
if (temp==sum)
{
   cout<<"Its a armstrong";
}
else
{
    cout<<"Its not a armstrong";
}
  
  return 0;

}

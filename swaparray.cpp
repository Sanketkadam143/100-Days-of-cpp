#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,n;
  cin>>n;
  a=n;
 int arr[n];   

 for (int i = 0; i < n; i++)
 {
     cin>>arr[i];
 }
 for (int i = 0; i < n/2; i++)
 {  n--;
   arr[i]=arr[i]+arr[n];
   arr[n]=arr[i]-arr[n];
   arr[i]=arr[i]-arr[n];

 }
 for (int i = 0; i < a; i++)
 {
     cout<<arr[i];
 }
 

 return 0;
}
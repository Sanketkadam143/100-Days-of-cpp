#include<bits/stdc++.h>
using namespace std;

int maxofarray(int arr[],int n){
    int max=arr[0];
    for (int i = 0; i < n; i++)
    { 
      if(max<arr[i]){
          max=arr[i];
      }
    }
    return max;

}
int main(){
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
           cin>>arr[i];                                                
    }
   cout<< maxofarray(arr,n);

return 0;
}
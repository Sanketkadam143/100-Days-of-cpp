#include<bits/stdc++.h>
using namespace std;

int minofarray(int arr[],int n){
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {  
      
      if(min>arr[i]){
          min=arr[i];
      }
    }
    return min;

}
int main(){
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
           cin>>arr[i];                                                
    }
   cout<< minofarray(arr,n);

return 0;
}
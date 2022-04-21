// linear search 

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int &n,int &key){
    bool found=false;
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {   
            found=true;
            cout<<"found at "<<i<<endl;
        }
    
        
    }
  return found;
}

int main(){
  int arr[]={4,2,5,8,7,6,3,9,8,7};
  int key=1;int n=sizeof(arr)/sizeof(arr[0]);

  if(search(arr,n,key)==false){
      cout<<"Not found";
  }
  

  return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main(){
    bool withdraw;
    int limit=0;

  for (int i = 0; i >0; i++)
  {
    
    cin>>withdraw;

    if (withdraw==true)
    {
        limit++;
    }

    if(limit>10){
        cout<<"Daily limit exhausted";
    }
  }
  
   
    
    return 0;
    
}
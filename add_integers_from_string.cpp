#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
  getline(cin,s);
    
   int digit,sum=0;


   stringstream ss(s);
   
   while(ss>>digit){
        
      sum+=digit;
      
   }
   cout<<sum;

   return 0;

}

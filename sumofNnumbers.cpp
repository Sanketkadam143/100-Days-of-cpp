// Sum of N numbers using recursion

#include<bits/stdc++.h>
using namespace std;

void func(int i,int sum){

    if(i<1){
        cout<<sum;
        return;
    }
    else{
        func(i-1,sum+i);
    }
}
int main(){
    int n;
    cin>>n;
    func(n,0);

    return 0;
}
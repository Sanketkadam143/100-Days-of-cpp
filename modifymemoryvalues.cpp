//Modify the values in memory so that a contains their sum and b contains their absoluted difference.



#include<iostream>
#include<cmath>
using namespace std;

void update(int *a,int *b) {
int c=*a;
*a=*a+*b;
*b=fabs(c-*b);  

}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a>>b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}


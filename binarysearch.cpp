#include<iostream>
using namespace std;

//Binary Search works only on sorted arrays.

int BinarySearch(int A[], int n, int key){
    int low, high, mid;
    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low + high) / 2;

        if(key == A[mid]){
            return mid;
        }else if(key < A[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){
   
    int A[] = {34, 35, 47, 52, 70};
    int len = sizeof(A) / sizeof(A[0]);

    int key;
    cout<<"Enter key:";
    cin>>key;

    int result = BinarySearch(A, len, key);

    if(result == -1){
        cout<<"Not found";
    } else {
        cout<<"Found at index: "<<result;
    }
return 0;

}

#include <iostream>
using namespace std;

int main() {
  int arr[] = {10,20,30,40,50,60};
  int arrSize = sizeof(arr)/sizeof(arr[0]);
  cout << "The size of the array is: " << arrSize;
  return 0;
}
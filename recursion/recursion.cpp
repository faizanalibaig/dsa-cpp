#include <iostream>
using namespace std;

int recursion(int arr[], int n){
  
  //base recursion
  if(n<0)
  return 0;

  cout<<arr[n]<<" ";

  return recursion(arr, n-1);
}

int main(){

  int arr[5]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(int)-1;
  recursion(arr, n);
  return 0;
}

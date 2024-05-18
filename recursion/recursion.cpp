#include <iostream>
using namespace std;

int recursion(int n){

  //base case in the recursion
  if(n==0)
  return 1;


  //recursive case in the recursion
  return n*recursion(n-1);
}

int main() {
  cout<<recursion(5);
}
#include <iostream>
#include "stack.cpp"
using namespace std;

int main(){
  Stack<int> stk;

  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.push(4);

  stk.display();
  
  return 0;
}
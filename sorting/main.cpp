#include <iostream>
using namespace std;

int SelectionSort(int array[], int size){
     for(int i=0; i<size-1; i++){
       for(int j=i+1; j<size; j++){
          if(array[i]>array[j]){
           int temp=array[j];
           array[j]=array[i];
           array[i]=temp;
          }
       }
   }
   
   for(int i=0; i<size; i++){
       cout<<array[i];
   }
}

int main() {
   int array[5]={2,1,10,3,2};
   int size=sizeof(array)/sizeof(int);
  
  SelectionSort(array, size);

   return 0;
}

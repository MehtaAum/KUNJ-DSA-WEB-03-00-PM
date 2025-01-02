//Q2 : Array of Pointers:

// Create an integer array and an array of pointers pointing to each element.
// Output the values of the array through the pointers.

#include <iostream>
using namespace std;

int main(){
 
 int arr[5] = {3,5,6,8,4};

 int *a[5] ;
  
  for (int i = 0; i <= 4; i++)
  {
   
    a[i] = &arr[i] ;
  }

  for (int i = 0; i <= 4; i++)
  {
   
    cout<<*a[i]<<endl;
  }
  
}
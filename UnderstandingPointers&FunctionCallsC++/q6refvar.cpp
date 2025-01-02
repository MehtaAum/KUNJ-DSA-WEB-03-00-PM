//Q6 :  Reference Variable:

// Create a reference variable for an integer and modify its value through the reference.

#include <iostream>
using namespace std;

int main(){
  int a = 5;
  int &ref = a;
  
  cout<<a<<endl;
  cout<<ref<<endl;

  ref = 8;

  cout<<a<<endl;
  cout<<ref<<endl;

}

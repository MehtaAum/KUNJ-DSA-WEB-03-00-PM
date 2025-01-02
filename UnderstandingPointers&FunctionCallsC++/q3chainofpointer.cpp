//Q3 : Chain of Pointers (Linked List):


#include <iostream>
using namespace std;

int main(){

 int x;
 cout<<"x : ";
 cin>>x;

 int *p;

 p = &x;

 int **ptr;

 ptr = &p;

cout<<"chain of pointer : "<<**ptr<<endl;
  
}
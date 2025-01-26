//this is unary operator overloading 

#include <iostream>
using namespace std;

class a{

public:

  int num1;

  a (int n){
    num1 = n;
  }

  a operator++(){ //operator ++ is a keyword 
    ++num1; //increment num1
    return *this; //dereference this to return current modified object , but if i write like this ( return num1 ); it just return the integer not whole object.
  }

  void display(){
    cout<<"Vale of num1 : "<<num1<<endl;
  }

};

int main(){

a a1(10), result(0);
result = ++a1; //when ++ type it automatically call this operator function that is operator++

result.display();





}
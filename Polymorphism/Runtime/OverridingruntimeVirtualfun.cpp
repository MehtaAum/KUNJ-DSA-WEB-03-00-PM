#include <iostream>
using namespace std;

class a{

public:
  virtual void num(){ //virtual is a keyword that demonstrate run time polymorphism 
    cout<<"base class"<<endl;
  }  
};

class b : public a{

public:

   void num(){
    cout<<"derived class"<<endl;
   }
};

int main() {

a *obj1;
b obj2;

obj1 = &obj2; //after giving virtual keyword it say that go to that class which class object address is given
obj1->num(); // -> this use coz of pointer known as member access we can also write like these (*obj1).num();


}
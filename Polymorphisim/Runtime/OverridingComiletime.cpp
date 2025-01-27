//compile-time polymorphism without (virtual function) so it resolve in compile time
//in overriding function name, return type, parameter must be same as base class

#include <iostream>
using namespace std;

class a{

public:
  void num(){
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

obj1 = &obj2;
obj1->num();//so, output is base class coz the pointer is pointing to base class a.


}
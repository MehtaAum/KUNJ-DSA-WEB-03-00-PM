#include <iostream>
using namespace std;

class a{

public:
   virtual void num() = 0 ; // this is pure virtual function (no implementation) (run time polymorphism)
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
obj1->num(); 


}
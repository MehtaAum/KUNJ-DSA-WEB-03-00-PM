// WHAT IS OVERLOADING CONSTRUCTOR ?

// overloading constructor is when same multiple class name constructor are made but with different parameter 


#include <iostream>
using namespace std;

class school{
public:
  string name;
  int age;
  int id;

//overloading constructor 
  school(){
    name = "aum";
    age = 20;
    id = 165;
    cout<<"constructor"<<endl;
  }
  school(string n, int a, int i){
    this->name = n;
    this->age = a;
    this->id = i;
  }
   school(string n, int a){
    this->name = n;
    this->age = a;
  }
//overloading constructor 

  void display(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<id<<endl;
  }

};

int main(){

school a1;
a1.display();

school a2("arpit",26,185);
a2.display();

school a3("arpit bala",45);
a3.display();

}
#include <iostream>
using namespace std;

class school{
 public:
   string name;
   int age;
   int id;

   school(string n, int a, int i): name(n), age(a), id(i){

   }

//copy constructor
   school(const school &a){
    name = a.name;
    age = a.age;
    id = a.id;

   }
//copy constructor

   void display(){
     cout<<name<<endl;
     cout<<age<<endl;
     cout<<id<<endl;
     
   }

};

int main(){

school a1("aum", 20, 4568);
a1.display();

school a2(a1);
a2.display();


}
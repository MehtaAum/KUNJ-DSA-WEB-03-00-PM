// what is inline constructor ?

// inline constructor body define within the class definition itself. 

#include <iostream>
using namespace std;

class university{
public:
  string name;
  string gender;
  int age;

//   inline constructor
university (string n, string g, int a ):name(n), gender(g), age(a){

}  
//   inline constructor    

void display(){
    cout<<name<<endl;
    cout<<gender<<endl;
    cout<<age<<endl;
  }

};

int main(){

university obj1("rohan","male",28);
obj1.display();

}
#include <iostream>
using namespace std;

class atm{
private:
     int pin;
public:
     int x; 
     int deposit;
     int withdraw;
     string details;

//parameterized constructor
     atm(int x, int deposit, int withdraw, string details){

           this->pin = 1234;//initialize value of pin
           this->x = x;
           this->x = pin;
           this->deposit = deposit;
           this->withdraw = withdraw;
           this->details = details;
           cout<<"constructor called"<<endl; 
     }
//parameterized constructor

     void dis() const{//const so that x will not modify.
           cout<<x<<endl;
     }

     void display(){

        cout<<deposit<<endl;
        cout<<withdraw<<endl;
        cout<<details<<endl;

     }

};

int main(){
     atm obj1(0,5000,1000,"balance : 4000" ); //when object is initialized then constructor will call automatically.
     obj1.dis();
     obj1.display();
     
}
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

//default constructor
     atm(){
        pin = 1234;//initialize value of pin
        x = pin;
        deposit = 5000;
        withdraw = 1000;
        details = "balance : 4000";
        cout<<"constructor called"<<endl; 
     }
//default constructor

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
     atm obj1; //when object is initialized then constructor will call automatically.
     obj1.dis();
     obj1.display();
     
}
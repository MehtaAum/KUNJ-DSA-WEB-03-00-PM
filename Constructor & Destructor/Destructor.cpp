#include <iostream>
using namespace std;

class bank{

public:

  int *balance;

  bank(int b){
   balance = new int(b);
   cout<<"bank class constructor called"<<endl;
  }

  ~bank(){
   cout<<"bank class destructor called"<<endl;
   delete balance;
  }


};

int main(){

  bank a1(100);

}//when al goes out of scope the destructor will be automatically call

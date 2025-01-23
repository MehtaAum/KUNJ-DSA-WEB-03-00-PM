#include <iostream>
using namespace std;

class flyinghero {
public:

  void fly(){
     cout<<"flying"<<endl;
  }

};
class fightinghero {
public:

  void fly(){
     cout<<"flying"<<endl;
  }

};

class ironman : public flyinghero, public fightinghero {
public:

  void iron(){
     cout<<"ironman"<<endl;
  }  

};



int main(){

 ironman obj1;

 obj1.iron();
//  obj1.fly();// this cause ambiguity

obj1.flyinghero::fly(); //error solved
obj1.fightinghero::fly(); //error solved

 
}
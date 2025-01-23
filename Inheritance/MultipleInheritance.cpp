#include <iostream>
using namespace std;

class flyinghero{

public:

    void fly(){
    cout<<"flying"<<endl;
    }
 
};

class fightinghero{

public:    

    void fight(){
        cout<<"fighting"<<endl;
    }
};

class ironman : public flyinghero, public fightinghero{

public:

    void laser(){
        cout<<"ironman shooting laser"<<endl;
    }

};


class superman : public flyinghero, public fightinghero{

public:

    void heat(){
        cout<<"superman heat vision"<<endl;
    }

};

int main(){

superman obj1;
ironman obj2;

obj1.heat();
obj1.fly();
obj1.fight();

cout<<"-----------------------------"<<endl;

obj2.laser();
obj2.fly();
obj2.fight();



  

}
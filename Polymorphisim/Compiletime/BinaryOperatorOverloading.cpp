//binary operator is when operands is more than one it called binary operator overloading(operands is like this a + b then a b are operands and + is operator)

#include <iostream>
using namespace std;

class game{

public:
  
  int player;

  game(int p){
    this->player = p; //it taking default first object value
  }

  game operator+(const game g2){ // it takes value of g2 obj
    game g3(0); //created another object
    g3.player = player + g2.player;
    
    return g3;
  }
  void display(){
    cout<<"result : "<<player<<endl; 
  }
  

};

int main(){

game g1(10), g2(190), result(0);

result = g1 + g2; //when + operator see it call automatic the operator keyword
result.display();

}
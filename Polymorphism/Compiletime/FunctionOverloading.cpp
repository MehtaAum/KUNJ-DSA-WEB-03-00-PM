//in c++ functionoverloading same returntype or different returntype is valid but function name should be same and also parameter should be different and in argument also give based on parameter so it call automatically that function.

#include <iostream>
using namespace std;

class game{

public:

  int player(int a){
   cout<<a<<endl;
   return 0;
 }
  
  string player(string a){
   cout<<a<<endl;
   return "invalid";

  }

};

int main(){

game g1;

g1.player(5);
g1.player("aum");

}
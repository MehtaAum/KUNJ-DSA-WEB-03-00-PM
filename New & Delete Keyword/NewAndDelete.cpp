#include <iostream>
using namespace std;

int main(){

    string *a = new string;
    string *b = new string;
    cout<<"First Name : ";
    cin>>*a;
    cout<<"last Name : ";
    cin>>*b;

    cout<<*a + *b<<endl;

    delete a; // freeing memory that are taken
    delete b; // freeing memory that are taken
   

}
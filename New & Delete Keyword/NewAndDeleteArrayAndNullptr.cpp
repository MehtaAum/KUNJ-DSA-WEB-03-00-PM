#include <iostream>
using namespace std;

int main() {
 
 int *arr = new int[5];//dynamically allocating memory 

 for (int i = 0; i <= 4; i++)
 {
    cout<<"arr ["<<i<<"] = ";
    cin>>arr[i];
 }
 cout<<endl<<"OUTPUT : "<<endl;
 for (int i = 0; i <= 4; i++)
 {
    cout<<"arr ["<<i<<"] = ";
    cout<<arr[i]<<endl;
 }

 delete []arr; //freeing allocated memory 

 cout<<"Pointer before nullptr: "<<arr<<endl;//you can check before nullptr it is still pointing addresss

 arr = nullptr; //(prevent dangling pointer) it was addressing the address still after freeing memory so now it not pointing address
 
 cout<<"Pointer after nullptr: "<<arr<<endl;

}
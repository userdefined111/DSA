#include <iostream>
using namespace std;

// int main(){
//     int a=10;
//     cout<<&a<<endl; // prints the address of variable a
//     cout<<*&a<<endl; // prints the value of variable a using dereferencing
//     int *ptr=&a;
//     *ptr=20; // changes the value of a to 20 using pointer
//     cout<<a<<endl; // prints the updated value of a
//     return 0;
// }


int main (){
    int a=5, y=10;
    int *ptr1=&a, *ptr2=&y;
    ptr1=ptr2; // now ptr1 points to y
    cout<<*ptr1<<endl; // prints the value of y which is 10
    cout<<*ptr2<<endl;
}
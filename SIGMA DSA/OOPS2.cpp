#include <bits/stdc++.h>
using namespace std;

// class print{
// public:
//     void show(int a){
//         cout << "Integer: " << a << endl;
//     }
//     void show(string s){
//         cout << "String: " << s << endl;
//     }
// };

// class Complex{
//     int real;
//     int img;
// public:
//     Complex(int r, int i){
//         real = r;
//         img = i;
//     }
//     void shownum(){
//         cout<< real << " + " << img << "i" << endl;
//     }
//     // operator overloading
//     Complex operator+(Complex &c1){
//         int resreal= this->real+c1.real;
//         int resimg= this->img+c1.img;
//         Complex c3(resreal, resimg);
//         return c3;
//     }
// };

class parent{
public:
    void show(){
        cout << "Parent class\n";
    }
};
class child:public parent{
public:
    void show(){
        cout << "Child class\n";
    }
}

int main(){
    
    return 0;
}

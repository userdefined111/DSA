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
    virtual void display(){
        cout << "Parent class display function\n";
    }
};
class child:public parent{
public:
    void show(){
        cout << "Child class\n";
    }
    void display(){
        cout << "Child class display function\n";
    }
};

// class  shape{
// public:
//     virtual void draw()=0;
// };
// class circle:public shape{
// public:
//     void draw(){
//         cout<<"Draw Circle\n";
//     }
// };
// class square: public shape{
// public:
//     void draw(){
//         cout<<"Draw Square\n";
//     }
// };

// void counter(){
//     static int count=0;
//     count ++;
//     cout<<"count:"<< count<<"\n";
// }
// void counter(){
//     int count=0;
//     count++;
//     cout<<"count:"<< count<<"\n";
// }

// class example{
// public:
//     static int x ;
// };
// int example::x=0;

// class example{
// public:
//     example(){
//         cout<<"constructor...\n";
//     }
//     ~example(){
//         cout<<"destructor...\n";
//     }
// };
`
int main(){
    child c;
    c.show(); // child class
    c.display(); // child class display function
    return 0;
}

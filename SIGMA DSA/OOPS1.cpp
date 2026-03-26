#include<bits/stdc++.h>
using namespace std;

// class user{
// public:
//     string name;
//     float cgpa;
//     void getpercentage(){
//     cout<< (cgpa*10) << "%";
//     }   
// };

// int main(){
//     user u1;
//     u1.name = "Rohit";
//     u1.cgpa = 9.5;
//     cout << "Name: " << u1.name << endl;
//     cout << "CGPA: " << u1.cgpa << endl;
//     u1.getpercentage();
//     return 0;
// }

// class Students{
//     string name;
//     float cgpa; 
//  public:
//      void getpercentage(){
//      cout<< (cgpa*10) << "%";
//      }
// //Setters
//     void setname(string n){
//         name=n;
//     }
//     void setcgpa(float c){
//         cgpa=c;
//     }
// //Getters
//     string getname(){
//         return name;
//     }
//     float getcgpa(){
//         return cgpa;
//     }
// };

// int main(){
//     Students s1;
//     s1.setname("Rohit");
//     s1.setcgpa(9.5);
//     cout << s1.getname() << endl;
//     cout << s1.getcgpa() << endl;
//     s1.getpercentage();
//     return 0;
// }

// class car{
//     string name;
//     string color;
// public:
//     car(){
//         cout<< "Default constructor called" << endl;
//         name = "Unknown";
//         color = "Unknown";
//     }
//     car(string name, string color){
    //     cout<< "Parameterized constructor called" << endl;
    //     this->name = name;
    //     this->color = color;
    // }
    // void start(){
    //     cout << "Car started" << endl;
    // }
    // void stop(){
    //     cout << "Car stopped" << endl;
    // } 
// };

// int main(){
//     car c1;
//     car c2("Tesla", "Red");
//     c1.start();
//     c1.stop();
//     return 0;
// }

// class User{
// private:
//         int ID;
//         string Password;
// public:
//         string username;
//         User(int ID){
//             this->ID=ID;
//         }
// //getter
//         string getpwd(){
//             return Password;
//         }
// //setter
//         void setpwd(string pwd){
//             this->Password = pwd;
//         }
// };

// int main (){
//     User user1(101);
//     user1.username = "Kapil";
//     user1.setpwd("12345");
//     cout << "Username: " << user1.username << endl;
//     cout << "Password: " << user1.getpwd() << endl;
//     return 0;
// }

// copy constructor
// class car{
// public:
//     string name;
//     string color;
//     int *mileage;
//     car( string name, string color){
//        this->name = name;
//        this->color = color;
//        mileage= new int ;
//        *mileage=12;
//     }
//     car(car&original){
//         name= original.name;
//         color= original.color;
//         mileage=new int; //deep copy
//         *mileage= *original.mileage; //deep copy
//         mileage= original.mileage; //shallow copy    
//     }
//     ~car(){
//         if(mileage!=NULL){
//             delete mileage;
//             mileage=NULL;
//         }
//     }
// };

// class animal{
// public:
//     string color;
//     void eat(){
//         cout << "Eats\n";
//     }
//     void breathe(){
//         cout << "Breathes\n";
//     }
// };
// class fish: public animal{
// public:
//     int fins;
//     void swim(){
//         cout << "Swims\n";
//     }
// };

// class animal{
// public:
//     string color;
//     void eat(){
//         cout << "Eats\n";
//     }
//     void breathe(){
//         cout << "Breathes\n";
//     }
// };
// class fish: public animal{
// public:
//     int fins;
//     void swim(){
//         cout << "Swims\n";
//     }
// };

// class animal{
// public:
//     void eat(){
//         cout << "Eats\n";
//     }
//     void breathe(){
//         cout << "Breathes\n";
//     }
// };
// class mammal:public animal{
// public:
//     void bloodtype(){
//         cout << "Blood type: Warm-blooded\n";
//     }
// };
// class Dog:public mammal{
// public:
//     void sound(){
//         cout << "A Dog Barks\n";
//     }
// };

class teacher{
public:
    void salary(){
        cout << "Salary: $5000\n";
    }
};
class students{
public:
    int rollno;
    float cgpa;
};
class TA:public teacher, public students{
public:
    string name;
};

int main(){
    TA ta1;
    ta1.name = "Kapil Soni";
    ta1.rollno = 2840;
    ta1.cgpa = 4.8;
    cout << "Name: " << ta1.name << endl;
    cout << "Roll No: " << ta1.rollno << endl;
    cout << "CGPA: " << ta1.cgpa << endl;
    ta1.salary();

    return 0;
}
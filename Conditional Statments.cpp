// // // // // // // // // #include <iostream>
// // // // // // // // // using namespace std;
// // // // // // // // // int main(){
// // // // // // // // // int a,b;
// // // // // // // // // cin>>a>>b;
// // // // // // // // //     if (a>b)
// // // // // // // // //     cout<<"first no. is greater than second no. "<<a<<endl;
// // // // // // // // //     else
// // // // // // // // //     cout<<"second no. is greater than first no. "<<b<<endl;
// // // // // // // // // }

// // // // // // // // #include <iostream>
// // // // // // // // using namespace std;
// // // // // // // // int main(){
// // // // // // // //     int a;
// // // // // // // //     cin>>a;
// // // // // // // //     if (a%2==0)
// // // // // // // //     cout<<"no. is even"<<endl;
// // // // // // // //     else
// // // // // // // //     cout<<"no. is odd"<<endl;
// // // // // // // // }

// // // // // // // #include <iostream>
// // // // // // // using namespace std;
// // // // // // // int main(){
// // // // // // // int income;
// // // // // // // cout<<"enter your income(in lakhs):";
// // // // // // // cin>>income;
// // // // // // // if(income<5){
// // // // // // // cout<<"no tax"<<endl;
// // // // // // // }
// // // // // // // else if(income>=5 and income<10){
// // // // // // // cout<<"20%tax is(in lakhs): "<<income*0.2<<endl;
// // // // // // // }
// // // // // // // else{
// // // // // // // cout<<"30%tax is(in lakhs): "<<income*0.3<<endl;
// // // // // // // }
// // // // // // // }

// // // // // // #include <iostream>
// // // // // // using namespace std;    
// // // // // // int main(){
// // // // // //     int a,b,c;
// // // // // //     cout<<"three numbers: ";
// // // // // //     cin>>a>>b>>c;
// // // // // //     if (a>b && a>c){
// // // // // //         cout<<"a is the largest no.: "<<a<<endl;
// // // // // //     }
// // // // // //     else if ( b>c){
// // // // // //         cout<<"b is the largest no.: "<<b<<endl;
// // // // // //     }
// // // // // //     else{
// // // // // //         cout<<"c is the largest no.: "<<c<<endl;
// // // // // //     }
// // // // // // }

// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int age;
// // // // //     cout<<"enter your age: ";
// // // // //     cin>>age;
// // // // //     bool isAdult = age >= 18 ? true : false;
// // // // //     cout<<"is adult: "<<isAdult<<endl;
// // // // //     return 0;
// // // // // }

// // // // #include <iostream>         
// // // // using namespace std;
// // // // int main(){
// // // //     int day ;
// // // //     cout<<"enter day no.(1-7): ";
// // // //     cin>>day;
// // // //     switch(day){
// // // //         case 1:
// // // //         cout<<"monday"<<endl;
// // // //         break;
// // // //         case 2 :
// // // //         cout<<"tuesday"<<endl;
// // // //         break;
// // // //         case 3 :
// // // //         cout<<"wednesday"<<endl;        
// // // //         break;
// // // //         case 4 :
// // // //         cout<<"thursday"<<endl;
// // // //         break;
// // // //         case 5 :
// // // //         cout<<"friday"<<endl;
// // // //         break;
// // // //         case 6 :
// // // //         cout<<"saturday"<<endl;
// // // //         break;
// // // //         case 7 :
// // // //         cout<<"sunday"<<endl;
// // // //         break;
// // // //         default:
// // //         cout<<"invalid day no."<<endl;
// // //     }
// // //     return 0;
// // // }

// // // #include <iostream>
// // // using namespace std;    
// // // int main(){
// // //     int a,b;
// // //     cout<<"enter a= ";
// // //     cin>>a;
// // //     cout<<"enter b= ";
// // //     cin>>b;
// // //     char op;
// // //     cout<<"enter operator(+,-,*,/): ";
// // //     cin>>op;
       
// // //     if (op=='+'){
// // //         cout<<"a+b "<<a+b<<endl;  }
// // //         else if( op=='-'){
// // //             cout<<"a-b ="<<a-b<<endl;
// // //              }
// // //             else if( op=='*'){
// // //                 cout<<"a*b ="<<a*b<<endl;
// // //             }
// // //             else if( op=='/'){
// // //                 cout<<"a/b ="<<a/b<<endl;
// // //             }
// // //     else{
// // //         cout<<"invalid operator"<<endl;
// // //     }
// // //     return 0;
// // // }

// // #include <iostream>     
// // using namespace std;
// // int main(){
// //     int a;
// //     cout<<"enter a no.: ";
// //     cin>>a;
// //     if(a>0){
// //         cout<<"no. is positive"<<endl;
// //     }
// //     else if(a<0){
// //         cout<<"no. is negative"<<endl;
// //     }
// //     else{
// //         cout<<"no. is zero"<<endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"enter year: ";
//     cin>>year;
//     if ( year%4==0){
//         cout<<"it is a leap year"<<endl;
//     }
//     else if( year%400==0){
//         cout<<"it is a leap year"<<endl;
//     }
//     else{
//         cout<<"it is not a leap year"<<endl;
//     }
//     return 0;
// }

// Question5: For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits.
//  Eg: 371 is an armstrong number.
//  3*3*3+7*7*7+1*1*1=3
#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter a 3 digit no.:";
    cin>>n;

    int num =n;//creating a capy of n

    int d1=num%10; //extracting last digit
    num=num/10;   //removing last digit
    int d2=num%10; //extracting second digit
    num=num/10;   //removing second digit
    int d3=num;//extracting first digit
    
    int cube_sum= (d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);

    if( cube_sum==n){
        cout<<"it is an armstrong no."<<endl;
    }
    else{
        cout<<"it is not an armstrong no."<<endl;
    }

}

// Question6:
// typedef: keyword in C++ is used for aliasing existing datatypes, user-defined datatypes, and pointers to a more meaningful name.
//  Eg: typedef int myInt
// This allows us to declare new integers using myInt, instead of int.

// Macros: can be of any type. Macros can even be any code block containing statements, loops, function calls etc. They are expanded by the preprocessor before compilation takes place.
//  const keyword is used to define the constant value that cannot changed during program execution.
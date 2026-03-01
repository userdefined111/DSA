//program to calculate the sum of first n natural numbers using a loop
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum=i*(i+1)/2;
        
//     }
//     cout<<"the sum is: "<<sum<<endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int i=10;
//     while(i<=25)
// {
//     cout<<i<<" ";
//     i++;
// }    
// return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout << "enter the number of lines: ";
// cin >> n;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     int digitSum=0;
//     while( n>0 ){
//         int lastdigit=n%10;
//         if( lastdigit % 2 != 0 ){
//             digitSum+=lastdigit;
//         }
//         n/=10;
//     }
//     cout << "the sum is: " << digitSum << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     int factorial=1;
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }
//     cout << "the factorial is: " << factorial << endl;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number to reverse: ";
//     cin >> n;

//     while(n>0){
//         int lastdigit=n%10;
//         cout<< lastdigit;
//         n/=10;
//     }
//     cout<<"\n";
//     return 0;
// }





// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "enter the number to reverse: ";
//     cin >> n;
//     int res=0;

//     while(n>0){
//         int lastdigit=n%10;
//         res=res*10+lastdigit;
//         n/=10;
//     }
//     cout<<res<<"\n";
//     return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//    int n=1;
//     do{
//        cout<<"hello world in do-while loop\n";
//    }while(n>5);

//    while(n>5){
//        cout<<"hello world in while loop\n";
//    }
//    return 0;
// }




// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     while(1>0)
//     {   cout<<"enter the number: ";
//         cin>>n;
//         if(n%10==0){
//             continue;
//         }
//         cout<<"the number is: "<<n<<endl;
//     }
//     return 0;
// }






// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     bool isPrime = true;
    
//     if (n <= 1) {
//         isPrime = false;
//     }
    
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }
    
//     if (isPrime) {
//         cout << n << " is a prime number" << endl;
//     } else {
//         cout << n << " is not a prime number" << endl;
//     }
//     return 0;
// }





// #include <iostream>
// using namespace std;    
// int main() {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     cout<<"the factorial is: "<<fact<<endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     for(int i=1;i<=10;i++)
//  {
//    cout<<n*i<<endl;
//  }
// return 0;
// }





// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     int first=0,sec=1;
//     cout<<first<<" "<<sec<<" ";
// for(int i=2;i<n;i++)
// {
//     int third=first+sec;
//     cout<<third<<" ";
//     first=sec;
//     sec=third;
// }

// cout<<"\n";
// }
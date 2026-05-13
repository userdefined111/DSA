// #include <bits/stdc++.h>
// using namespace std;
// // Class containing the method to find string length
// class Solution {
// public:
//     // Function to return length of a string
//     int findLength(string s) {
//         // Return length using built-in function
//         return s.length();
//     }
// };
// // Driver code
// int main() {
//     // Create object of Solution class
//     Solution obj;
//     // Input string
//     string s = "Hello World";
//     // Call function and print result
//     cout << obj.findLength(s) << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // Class containing the method to access characters
// class Solution {
// public:
//     // Function to print each character of a string
//     void accessCharacters(string s) {
//         // Loop through each index
//         for (int i = 0; i < s.length(); i++) {
//             // Print the character at index i
//             cout << s[i] << endl;
//         }
//     }
// };
// // Driver code
// int main() {
//     // Create object of Solution class
//     Solution obj;
//     // Input string
//     string s = "Hello";
//     // Call the function
//     obj.accessCharacters(s);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// // Solution class containing modifyString function
// class Solution {
// public:
//     // Function to modify the string
//     string modifyString(string str) {
//         // Assign str to a new variable
//         string newStr = str;
//         // Modify the new string
//         newStr[0] = 'H';
//         // Return the modified string
//         return newStr;
//     }
// };
// int main() {
//     // Original string
//     string original = "hello";
//     // Create object of Solution class
//     Solution sol;
//     // Call modifyString and store the result
//     string modified = sol.modifyString(original);
//     // Print both strings
//     cout << "Original String: " << original << endl;
//     cout << "Modified String: " << modified << endl;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n;
//     cin>>n;
//     for (int i=0; i<n;i++){
//             for (int j =0; j<n; j++){
//                 cout<<"* ";
//             }
//             cout<<endl;
//         }
//     return 0;
//     }

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n; 
//     cin>>n;
//     for(int i=0; i<n;i++){
//         for(int j=n; j>=n-i;j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for( int i=n; i>=1;i--){
//         for ( int j=1; j<=i; j++){
//             cout<<j<<" ";        
//         }
//         cout<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for ( int i=n; i>=1;i--){
//         for ( int j=1; j<=i; j++){
//             cout<<"* ";        
//         }
//         cout<<endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for ( int i=1; i<=n;i++){
//         cout<<n-i-1<<" ";
//         for ( int j=1; j<n-i-1; j++){
//             cout<<"* ";   
//         }
//         for( int k=0; k<n-i;k++){
//         cout<<k<<" ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for ( int i=1;i<=n;i++){
//         for ( int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for ( int j=0; j<=2*(i-1);j++){
//             cout<<"*";
//         }
//         for ( int j=0;j<n-i;j++){
//             cout<<" ";
//         } 
//         cout<<endl;
//     }
//     for ( int i=1;i<=n;i++){
//         for ( int j=1;j<=i;j++){
//             cout<<" ";
//         }
//         for ( int j=0; j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for ( int j=1;j<=i;j++){
//             cout<<" ";
//         } 
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for ( int i=1;i<=2*n-1;i++){
//         int stars= i;
//         if (i>n) stars=2*n-i;
//         for ( int j=1;j<=stars;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
    
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for ( int i=1;i<=2*n-1;i++){
//         int start=1;
//         if ( i%2==0) start=0;
//         else start=1;
//         for (int j=0;j<i;j++){
//             cout<<start<<" ";
//             start=1-start;  
//         }
//         cout<<endl;
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int space=2*(n-1);
//     for ( int i=1;i<=n;i++){
//         for ( int j=1;j<=i;j++){
//             cout<<j;
//         }
//         for ( int j=1;j<space;j++){
//             cout<<" ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }
//         cout<<endl;
//         space=space-2;
//     }
// }

#include<bits/stdc++.h>
using namespace std;

// void countdig(int n, int count){
//     if ( n==0){
//         cout<<count;
//     }
//     else{
//             countdig(n/10, count+1);
//         }
// }

// void findgcd(int a, int b){
//     int gcd=1;
//     for ( int i = 1; i <=min(a,b); i++ ){
//         if (a%i==0 &&b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd;
// }

// void findgcd(int a, int b){
//     int gcd=1;
//     for ( int i = 1; i <=min(a,b); i++ ){
//         if (a%i==0 &&b%i==0){
//             gcd=i;
//         }
//     }
//     cout<<gcd;
// }

// bool isarmstrong(int num){
//     int k= to_string(num).length();
//     int sum =0;
//     int n=num;
//     while (n>0){
//         int ld=n%10;
//         sum= sum+round(pow(ld,k));
//         n=n/10;
//     }
//     return sum==num;
// }

// void finddivisor(int n){
//     for ( int i=0;i<=n; i++){
//         if ( n%i==0){
//             cout<< i<<" ";
//         }
//     }
// }

// void printname( string name, int count, int n){
//     if ( count==n)
//     return;
//     cout<< name<<endl;
//     printname(name,count+1,n);
// }

// void printnum(int n, int num){
//     if (num>n)
//     return;
//     cout<< n<<" ";
//     printnum(n, num+1);
// }

// void printnumreverse( int num){
//     if (num<1){
//     return;
//     }
//     cout<< num<<" ";
//     printnum(num-1);
// }

// void sumofnum(int n, int sum){
//     if (n<1){
//         cout<<sum;
//         return;
//     }
//     sumofnum(n-1,sum+n);
// }

// void factorial(int n, int mul){
//     if ( n<1){
//         cout<< mul;
//         return;
//     }
//     factorial( n-1, mul*n);
// }

// bool ispalindromestr(int i, string B){
//     if (i>=B.length()/2){
//         return true;
//     }
//     if(B[i]!=B[B.length()-1-i]){
//         return false;
//     }
//     return ispalindromestr(i+1, B);
// }

// int fibonacci( int n){
//     if( n<=1){
//         return n;
//     }
//     int a=fibonacci(n-1);
//     int b=fibonacci(n-2);
//     return a+b;
// }


int main(){
    string B="dada";
    cout<<ispalindromestr(0,B);
    return 0;
}

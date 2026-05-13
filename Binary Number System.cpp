#include<iostream>
using namespace std;
void bintodec(int binNum ){
   int n=binNum;
   int decNum=0;
   int pow=1;
   while(n>0){
      int lastdig=n%10;
      decNum+=lastdig*pow;
      pow=pow*2;
      n=n/10;
   }
   cout<<decNum<<endl;
}

void dectobin(int decNum){
   int n=decNum;
   int binNum=0;
   int pow=1;
   while(n>0){
      int rem=n%2;
      binNum+=rem*pow;
      pow=pow*10;
      n=n/2;
   }
cout<<binNum<<endl;
}

int main(){ 
    bintodec(1011);
    dectobin(69);
    return 0;
 }
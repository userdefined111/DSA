#include<iostream>
using namespace std;

bool isEven(int n){
    if (n%2==0)
    return true;
    else
    return false;
}

int fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<factorial<<endl; 
}

int binomialCoeff(int n, int r){
    int num=fac(n);
    int deno=fac(r)*fac(n-r);
      int result=num/deno;
    return result;
}

int sum(int a,int b){
    return a+b;
}

double sum(double a,double b){
    return a+b;
}

int sum(int a,int b,int c){
    return a+b+c;
}

bool isprime(int n){
  if ( n==1){
    return false;
  }
  for (int i=2;i<=n;i++){
    if (n%i==0)
    return false;
  }
  return true;
}

void allprimes(int n){
  for (int i=2;i<=n;i++){
    if(isprime(i)){
      cout<<i<<" ";
    }
  }
  cout<<endl; 
}

int main(){
    cout<<allprimes(10)<<endl;
    return 0;  
}





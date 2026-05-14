#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

void print(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    print(n-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

bool issorted(int arr[],int a, int i){
    if(i==a-1){
        cout<<"Array is sorted\n";
        return true;
    }
    if(arr[i]>arr[i+1]){
        cout<<"Array is not sorted\n";
        return false;
    }
    return issorted(arr,a-1,i+1);
}

int firstoccurence(vector<int>arr, int target,int i) {
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstoccurence(arr,target,i+1);
}

int lastoccurence(vector<int>arr, int target, int i){
    if(i==-1){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return lastoccurence(arr,target,i-1);
}

int  power(int x, int i){
    if(i==0){
        return 1;
    }
    int halfpower =power(x,i/2);
    int halfpowersquare= halfpower*halfpower;
    if(i%2!=0){
        return x*halfpowersquare;
    }
    return halfpowersquare;
}

int main(){
    cout<<factorial(5)<<"\n";
    print(5);
    cout<<"\n"<<sum(5)<<"\n";
    cout<<fibo(5)<<"\n";
    int arr[]={1,2,3,4,5};
    issorted(arr,5,0);
    vector<int>arr1={1,2,3,4,5,6,7,8,9,10};
    cout<<firstoccurence(arr1,5,0)<<"\n";
    cout<<lastoccurence(arr1,5,arr1.size()-1)<<"\n";
    cout<<power(2,10)<<"\n";
    return 0;
}
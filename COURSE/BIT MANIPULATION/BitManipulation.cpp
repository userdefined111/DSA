#include <bits/stdc++.h>
using namespace std;
// int main(){
//     cout<<(3&5)<<"\n"; // 1
//     cout<<(3|5)<<"\n"; // 7
//     cout<<(3^5)<<"\n"; // 6
//     cout<<(~6)<<"\n"; // -7
//     cout<<(7<<2)<<"\n"; // 28
//     cout<<(7>>2)<<"\n"; // 1
//     cout<<(~4)<<"\n"; // -5
//     cout<<(8>>1)<<"\n"; // 4
// }

int getithbit(int num, int i){
    int bitmask=(1<<i); // create a bitmask with the ith bit set to 1
    int bit=num&bitmask; // get the ith bit of num
    if(bit==0){ 
        return 0; // if the ith bit is 0, return 0
    }
    else {
        return 1; // if the ith bit is 1, return 1
    } 
    return 0;
} 

void oddeven(int n){
    if(n&1) cout<<"Odd\n";
    else cout<<"Even\n";
}

int setithbit(int num, int i){
    int bitmask= i<<i ; // create a bitmask with the ith bit set to 1
    return(num|bitmask); // set the ith bit of num to 1
    
}

void updateithbit(int num, int i, int val){
    num=num&~(1<<i); // clear the ith bit
    num=num|(val<<i); // set the ith bit to val
    cout<<num<<"\n";
}

void clearithbit(int num, int i){
    int bitmask= (~0<<i); // clear the ith bit
    num=num&bitmask; // set the ith bit to 0
    cout<<num<<"\n";
}

void countsetbits(int n){
    int count=0;
    while(n>0){
        int lastbit=(n&1); // get the last bit
        count+=lastbit; // add the last bit to the count
        n=n>>1; // right shift the number by 1
    }
    cout<<count<<"\n";
}

void fastexpo(int x, int n){
    int ans=1;
    while(n>0){
        int lastbit=(n&1); // get the last bit
        if(lastbit==1) ans=ans*x; // if the last bit is 1, multiply the answer by x
        x=x*x; // square x
        n=n>>1; // right shift the number by 1
    }
    cout<<ans<<"\n";
}

int main(){
    cout<<getithbit(6, 2)<<"\n";
    oddeven(6);
    cout<<setithbit(6, 3)<<"\n";
    updateithbit(6, 1, 1);
    clearithbit(6, 1);
    countsetbits(6);
    fastexpo(2, 10);
    return 0;
}
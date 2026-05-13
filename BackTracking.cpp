#include <bits/stdc++.h>
using namespace std;

void printarr(int arr[], int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void changearr(int arr[], int n, int i){
    if ( i==n){
        printarr(arr, n);
        return;
    }
    arr[i]=i+1;
    changearr(arr, n, i+1);
    arr[i]-=2;
}

void printsubsets(string s, string subset, int i){
    if (i==s.length()){
        cout<<subset<<" ";
        return;
    }
    // include the current character
    printsubsets(s, subset+s[i], i+1);
    // exclude the current character
    printsubsets(s, subset, i+1); 
}

void printsubsets(string s, string subset){
    char ch=s[0];
    //base case
    if (s.length()==0){
        cout<<subset<<"\n";
        return;
    }
    //yes choice
    printsubsets(s.substr(1,s.length()-1), subset+ch);
    //no choice
    printsubsets(s.substr(1,s.length()-1), subset);
}

void permutations(string s,string ans ){
    if(s.size()==0){
        cout<<ans<<"\n";
        return;
    }
    for( int i=0;i<s.size();i++){
        char ch= s[i];
        permutations(s.substr(0,i)+s.substr(i+1,s.size()), ans+ch);
    }
}

int main(){
    string s="abc";
    string ans="";
    permutations(s, ans);
    return 0;
}
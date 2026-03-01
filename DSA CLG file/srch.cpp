#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6, key= 4;
     for( int i=0;i<n; i++){
        if(arr[i]==key){
            cout<<"key is at index "<< i;
        }
     }
}
#include <iostream>
using namespace std;
int main (){
    int arr[10]={10,20,30,40,50};
    int n=5;

    //insertion
    int start=2, val=25;
    for( int i=n;i>start;i--){
        arr[i]=arr[i-1];
        arr[start]=val;
        n++;
        cout<<"inserted arr ";
        for ( int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";

        //deletion
        start=3;
        for( int i=start;i<n;i++){
            arr[i]=arr[i+1];
            n--;
        }
        cout<< " deleted arr ";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
            
        }
    }
}
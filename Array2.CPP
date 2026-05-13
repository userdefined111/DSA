#include <bits/stdc++.h>
using namespace std;
// void printSubarray(int arr[], int n) {
//     for ( int start=0;start<n;start++){
//         for( int end=start;end<n;end++){
//             // cout<<"("<<start <<","<<end<<") ";
//             for( int i=start;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<",";
//         }
//         cout<<endl;
//     }
// }

// void maxsubarraysum(int arr[],int n){
//     int maxsum=INT_MIN;
//     for(int start=0;start<n;start++){
//         int currsum=0;
//         for(int end=start;end<n;end++){
//             currsum+=arr[end];
//             maxsum=max(maxsum,currsum);
//         }
//         cout<<endl;
//     }
//     cout<<"Max Sum is "<<maxsum;
// }


int main(){
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxsubarraysum(arr, n);
    return 0;
}
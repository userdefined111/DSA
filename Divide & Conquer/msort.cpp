#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l, int mid, int r){//O(n) time complexity
    vector <int > temp;
    int i=l,j=mid+1;
    while(i<=mid&&j<=r){
        if(a[i]<a[j]){
            temp.push_back(a[i]);
            i++;
        }
        else{
            temp.push_back(a[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while(j<=r){
        temp.push_back(a[j]);
        j++;
    }

    for(int i=l,x=0;i<=r;i++,x++){
        a[i]=temp[x];
    }

}

void mergesort(int a[],int l, int r){//O(nlogn) time complexity
    if(l>=r){
        return;
    }
    int mid=l+(r-l)/2; 
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);

    merge(a,l,mid,r);
}

void printarr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}
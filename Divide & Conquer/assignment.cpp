#include <bits/stdc++.h>
using namespace std;

void merge(vector<string>& arr,int s,int mid,int e){
    vector<string>temp;
    int i=s,j=mid+1;
    while(i<=mid&&j<=e){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=0;k<temp.size();k++){
        arr[s+k]=temp[k];
    }
}

void sort(vector<string>& arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    sort(arr,s,mid);
    sort(arr,mid+1,e);
    merge(arr,s,mid,e);
}

int majorityElement(vector<int>& arr) {
    map<int,int>mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    int majority=-1;
    for(auto it:mp){
        if(it.second>arr.size()/2){
            majority=it.first;
            break;
        }
    }
    return majority;
}

int main(){
    // int n;
    // cout<<"Enter the number of strings: ";
    // cin>>n;
    // vector<string>arr(n);
    // cout<<"Enter the strings: ";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // sort(arr,0,n-1);
    // cout<<"Sorted strings: ";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[]={3,2,3};
    vector<int>v(arr,arr+3);
    cout<<"Majority element: "<<majorityElement(v)<<endl;   

}
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>&arr,int si, int ei, int target){
    if(si>ei){
        return -1;
    }
    int mid = si + (ei-si)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[si]<=arr[mid]){
        if (arr[si] <= target && target <= arr[mid]){
            return search(arr,si,mid-1,target);
        }
        else{
            return search(arr,mid+1,ei,target);
        }
    }
    else{
        if (arr[mid] < target && target <= arr[ei]){
            return search(arr,mid+1,ei,target);
        }
        else{
            return search(arr,si,mid-1,target);
        }
    }
}

int main(){
    vector<int>arr = {4,5,6,7,0,1,2};
    int target = 0;
    int ans = search(arr,0,arr.size()-1,target);
    cout<<ans<<endl;
}
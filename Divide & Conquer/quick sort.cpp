#include <bits/stdc++.h>
using namespace std;

void quicksort(vector <int > a[],int l, int r){
    int pivotidx= partition(a,l,r);
    quicksort(a,l,pivotidx-1);
    quicksort(a,pivotidx+1,r);
}

int partition(vector<int> a[],int l, int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void printarr(vector<int> a[],int n){
    for(int i=0;i<n;i++){
        cout << a[i]<<" ";
    }
    cout<<endl;
}


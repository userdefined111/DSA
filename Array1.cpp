#include  <iostream>
using namespace std;
// int main() {
//     int arr[5] = {85, 90, 78, 92, 88};
//     for (int idx = 0; idx < 5; idx++)
//     {
//         cout << arr[idx] << " ";
//     }
//     return 0;
// }

// int main() {
//     int arr[5];
//     int n=sizeof(arr)/sizeof(int);
//     for ( int idx = 0; idx<n; idx ++)
//     {
//         cin>> arr[idx];
//     }
//     for ( int idx = 0; idx<n ; idx++)
//     {
//         cout<< arr[idx]<<" ";
//     }
//     return 0;
// }

// int main ()// {//finding maximum value in the array
// {
//     int arr[]={1,2,3,4,5,6,89,56,44,56,78,99,23};
//     int n= sizeof(arr)/sizeof(int);
//     int max= arr[0];
//     for (int a=0; a<n; a++)
//     {
//         if (arr[a] >max)
//         {
//             max= arr[a];
//             cout<< max;
//         }
//     }
//     cout<< "The maximum value in the array is: "<< max;
//     return 0;
// }

// int main ()//finding minimum value in the array
// {
//     int arr[]={1,2,3,4,5,6,89,56,44,56,78,99,23};
//     int n= sizeof(arr)/sizeof(int);
//     int min= arr[0];
//     for (int a=0; a<n; a++)
//     {
//         if (arr[a] <min)
//         {
//             min= arr[a];
//             cout<< min;
//         }
//     }
//     cout<< "The minimum value in the array is: "<< min;
//     return 0;
// }

// #include <bits/stdc++.h>// // Function to find the largest element in the array
// using namespace std;
// int findLargestElement(int arr[], int n) {
//     int max = arr[0];  // Initialize max with the first element in the array
//     for (int i = 1; i < n; i++) // // Iterate through the array to find the maximum element {
//         if (max < arr[i]) {  // If the current element is greater than max, update max
//             max = arr[i];
//         }
//     }
//     return max;  // Return the largest element found
// }

// int main() {
//     // Array 1
//     int arr1[] = {2, 5, 1, 3, 0};
//     int n = 5;  // Size of the array
//     int max = findLargestElement(arr1, n);  // Call the function to find the largest element
//     cout << "The largest element in the array is: " << max << endl;  // Output the result
//     // Array 2
//     int arr2[] = {8, 10, 5, 7, 9};
//     n = 5;  // Size of the array
//     max = findLargestElement(arr2, n);  // Call the function to find the largest element
//     cout << "The largest element in the array is: " << max << endl;  // Output the result
//     return 0;
// }

int linearsearch(int arr[],int n,int key)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

// int main()       //reverse an array
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(int);
//     int copyarr[n];
//     for (int i=0; i<n; i++)
//     {
//         int j=n-i-1;
//         copyarr[j]= arr[i];
//     }
//     for ( int i=0;i<n; i++)
//     {
//         cout<< copyarr[i]<<" ";
//     }
//     return 0;
// }

// int main()//reverse an array in place
// {   int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr)/sizeof(int);
//     int start=0, end=n-1;
//     while (start<end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     } 
// }

int binarysearch(int *arr, int n,int key)
{
    int st=0, end=n-1;
    while(st<=end)
    {
        int mid= (st+end)/2;
        if ( arr[mid]==key)
            {
                return mid;
            }
        else if (arr[mid]>key)
            {
                end=mid-1;
            }
        else
            {
                st=mid+1;
            }
    }
    return -1;
}

void search(int arr[], int n, int a){
    for( int i=0; i<n;i++){
        if(arr[i]==a)
        cout<<i;
    }
    cout<<-1;
}

// int main(){       
//     int arr[6]={1,2,3,4,5,6};
//     int start=0 ,end=5;
//     for( int i=0;i<=5;i++){
//         while (start<end){
//             swap(arr[start],arr[end]);
//             start++;
//             end--;
//         };
//         cout<<arr[i]<<" ";
//     }  
// } 

////TOTAL SUBARRAYS FORMULA=(n(n+1))/2

void srchelement(int &arr, int key){
    for ( int i=0;i<sizeof(arr)/sizeof(int);i++){
        if(arr[i]=key){
            return i;
        }
        else{
            return -1;
        }
    }
}

// int main(){
//     int n;
//     cout<<" entre the no.";
//     cin>>n;
//     int arr[1000];
//     // 1st no.=0;
//     // 2nd no.=1;
//     arr[0]=0;
//     arr[1]=1;
//     for ( int i=2;i<n;i++)
//     arr[i]=arr[i-1]+arr[i-2];
//     cout<<arr[n-1]<<" ";
// }

void rotate(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
        arr[0]=last;
    }
    cout<<arr;
}

// // selection sorting ascending order
// int main(){
//     int arr[10000];
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the elements of array: ";
//     for( int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for ( int i=0;i<n-1;i++){
//         int index=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[index]){
//                 index=j;
//             } 
//         }
//         swap(arr[index],arr[i]);   
//     }
//     for( int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// // selection sorting descending order
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"enter the size of array: ";
//     cin>>n;
//     cout<<"enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for ( int i=0;i<n-1;i++){
//         int index=0;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[index]){
//                 index=j;     
//             }
//         }
//         swap(arr[index],arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// bubble sorting ascending order
int main  (){
    int arr[1000];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // main algorithm
    for (int i=0;i<=n-i;i++){
        int index;
    }
}
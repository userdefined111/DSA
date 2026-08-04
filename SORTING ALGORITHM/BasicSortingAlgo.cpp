#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev + 1], arr[prev]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void countingsort(vector<int> &arr)
{
    int n = arr.size();
    int freq[100000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    for (int i = minval, j = 0; i <= maxval; i++)
    {
        while (freq[i] > 0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }
}

void printArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

void sortchar(vector<char> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i], prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printarray(const vector<char> &arr)
{
    for (char c : arr)
    {
        cout << c << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    // vector<char> array={'g','e','k','s'};

    cout << "Original array: ";
    printArray(arr);

    // Bubble Sort
    vector<int> arr1 = arr;
    bubbleSort(arr1);
    cout << "Bubble Sort: ";
    printArray(arr1);

    // Selection Sort
    vector<int> arr2 = arr;
    selectionSort(arr2);
    cout << "Selection Sort: ";
    printArray(arr2);

    // Insertion Sort
    vector<int> arr3 = arr;
    insertionSort(arr3);
    cout << "Insertion Sort: ";
    printArray(arr3);

    // Using Counting Sortng
    vector<int> arr4 = arr;
    countingsort(arr4);
    cout << "Counting Sort: ";
    printArray(arr4);

    // Using C++ built-in sort
    vector<int> arr5 = arr;
    sort(arr5.begin(), arr5.end());
    cout << "Built-in Sort: ";
    printArray(arr5);

    // character sorting
    //  vector<char> arr6=array;
    //  sortchar(array);
    //  cout<<"CharSort: ";
    //  printarray(array);  // Now compiles!
    //  return 0;
}

// int main(){
//     vector<int>&arr ={64, 34, 25, 12, 22, 11, 90};
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }
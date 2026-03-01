#include <iostream>
#include <algorithm>
using namespace std;

// Function to calculate mean
double calculateMean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / (double)size;
}

// Function to calculate median
double calculateMedian(int arr[], int size) {
    // Sort the array first
    sort(arr, arr + size);
    
    // If even number of elements
    if (size % 2 == 0) {
        return (double)(arr[size/2 - 1] + arr[size/2]) / 2.0;
    }
    // If odd number of elements
    else {
        return (double)arr[size/2];
    }
}

int main() {
    int arr[] = {3, 5, 2, 1, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    double mean = calculateMean(arr, size);
    double median = calculateMedian(arr, size);
    
    cout << "Mean is: " << mean << endl;
    cout << "Median is: " << median << endl;
    
    return 0;
}

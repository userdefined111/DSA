#include <bits/stdc++.h>
using namespace std;

// Function to print all subarrays
void printSubarray(int arr[], int n) {
    cout << "All subarrays are:" << endl;
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            cout << "[ ";

            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }

            cout << "] ";
        }
        cout << endl;
    }
}

// Function to find maximum subarray sum using brute force
void maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++) {
        int currSum = 0;
        for (int end = start; end < n; end++) {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}

int main() {
    int arr[1000];
    int n;
    int choice;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Choose operation:" << endl;
    cout << "1. Print all subarrays" << endl;
    cout << "2. Find maximum subarray sum" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
        case 1:
            printSubarray(arr, n);
            break;

        case 2:
            maxSubarraySum(arr, n);
            break;

        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}
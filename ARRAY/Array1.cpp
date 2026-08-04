#include <iostream>
#include <algorithm>
using namespace std;

// 1. Print fixed array
void printFixedArray()
{
    int arr[5] = {85, 90, 78, 92, 88};

    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 2. Input and print array
void inputAndPrintArray()
{
    int arr[1000];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 3. Find maximum element
int findMaximum(int arr[], int n)
{
    int maxValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

// 4. Find minimum element
int findMinimum(int arr[], int n)
{
    int minValue = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }

    return minValue;
}

// 5. Linear search
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }

    return -1;
}

// 6. Binary search
// Important: array must be sorted
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

// 7. Reverse array using extra array
void reverseUsingExtraArray(int arr[], int n)
{
    int copyArr[1000];

    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[j] = arr[i];
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << copyArr[i] << " ";
    }
    cout << endl;
}

// 8. Reverse array in-place
void reverseInPlace(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 9. Fibonacci nth term
int fibonacci(int n)
{
    if (n <= 0)
    {
        return -1;
    }

    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n - 1];
}

// 10. Rotate array by one position to the right
void rotateRightByOne(int arr[], int n)
{
    int last = arr[n - 1];

    for (int i = n - 2; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[0] = last;

    cout << "Array after right rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 11. Selection sort ascending
void selectionSortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }

    cout << "Array after selection sort ascending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 12. Selection sort descending
void selectionSortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }

    cout << "Array after selection sort descending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 13. Bubble sort ascending
void bubbleSortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }

    cout << "Array after bubble sort ascending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 14. Bubble sort descending
void bubbleSortDescending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }

    cout << "Array after bubble sort descending: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Common input function
void takeArrayInput(int arr[], int &n)
{
    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// Main function
int main()
{
    int choice;
    int arr[1000];
    int n;
    int key;

    cout << "Choose an operation:" << endl;
    cout << "1. Print fixed array" << endl;
    cout << "2. Input and print array" << endl;
    cout << "3. Find maximum element" << endl;
    cout << "4. Find minimum element" << endl;
    cout << "5. Linear search" << endl;
    cout << "6. Binary search" << endl;
    cout << "7. Reverse array using extra array" << endl;
    cout << "8. Reverse array in-place" << endl;
    cout << "9. Fibonacci nth term" << endl;
    cout << "10. Rotate array right by one" << endl;
    cout << "11. Selection sort ascending" << endl;
    cout << "12. Selection sort descending" << endl;
    cout << "13. Bubble sort ascending" << endl;
    cout << "14. Bubble sort descending" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        printFixedArray();
        break;

    case 2:
        inputAndPrintArray();
        break;

    case 3:
        takeArrayInput(arr, n);
        cout << "Maximum element is: " << findMaximum(arr, n) << endl;
        break;

    case 4:
        takeArrayInput(arr, n);
        cout << "Minimum element is: " << findMinimum(arr, n) << endl;
        break;

    case 5:
        takeArrayInput(arr, n);
        cout << "Enter element to search: ";
        cin >> key;

        if (linearSearch(arr, n, key) != -1)
        {
            cout << "Element found at index: " << linearSearch(arr, n, key) << endl;
        }
        else
        {
            cout << "Element not found" << endl;
        }
        break;

    case 6:
        takeArrayInput(arr, n);
        cout << "Enter element to search: ";
        cin >> key;

        if (binarySearch(arr, n, key) != -1)
        {
            cout << "Element found at index: " << binarySearch(arr, n, key) << endl;
        }
        else
        {
            cout << "Element not found" << endl;
        }
        break;

    case 7:
        takeArrayInput(arr, n);
        reverseUsingExtraArray(arr, n);
        break;

    case 8:
        takeArrayInput(arr, n);
        reverseInPlace(arr, n);
        break;

    case 9:
        cout << "Enter n: ";
        cin >> n;

        if (fibonacci(n) == -1)
        {
            cout << "Invalid input" << endl;
        }
        else
        {
            cout << "The " << n << "th Fibonacci term is: " << fibonacci(n) << endl;
        }
        break;

    case 10:
        takeArrayInput(arr, n);
        rotateRightByOne(arr, n);
        break;

    case 11:
        takeArrayInput(arr, n);
        selectionSortAscending(arr, n);
        break;

    case 12:
        takeArrayInput(arr, n);
        selectionSortDescending(arr, n);
        break;

    case 13:
        takeArrayInput(arr, n);
        bubbleSortAscending(arr, n);
        break;

    case 14:
        takeArrayInput(arr, n);
        bubbleSortDescending(arr, n);
        break;

    default:
        cout << "Invalid choice" << endl;
    }

    return 0;
}
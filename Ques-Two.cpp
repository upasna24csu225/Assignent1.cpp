#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    
    while (start < end) {

        int c = arr[start];
        arr[start] = arr[end];
        arr[end] = c;
        
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}

void findSecondLargestAndSmallest(int arr[], int size) {
    if(size < 2) {
        cout << "Array should have at least 2 elements" << endl;
        return;
    }
   
    int largest = arr[0];
    int smallest = arr[0];
    int secondLargest = arr[0];
    int secondSmallest = arr[0];
    
    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
        
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    cout << "Second Largest element is: " << secondLargest << endl;
    cout << "Second Smallest element is: " << secondSmallest << endl;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    if(size <= 0) {
        cout << "Please enter a valid size (greater than 0)" << endl;
        return 1;
    }
    
    int* arr = new int[size];
    
    cout << "Enter " << size << " elements:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal Array: ";
    printArray(arr, size);
    reverseArray(arr, size);
    cout << "Reversed Array: ";
    printArray(arr, size);
   
    findSecondLargestAndSmallest(arr, size);
    
    delete[] arr;
    
    return 0;
}

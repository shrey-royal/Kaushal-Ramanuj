#include<iostream>
using namespace std;

void bubbleSort(int[], int);
void swap(int*, int*);
int binarySearch(int[], int, int);

void printArray(int arr[], int size);

int main() {
    int size = 0;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    for(int i=0 ; i<size; i++) {
        // cout << "Enter the value of arr[" << i << "]: ";
        // cin >> arr[i];
        arr[i] = rand() % 100;
    }
    // printArray(arr, size);
    // cout << "\nSorting the array...\n";
    bubbleSort(arr, size);
    printArray(arr, size);

    int key = 0;
    cout << "\nEnter the key to search: ";
    cin >> key;

    int index = binarySearch(arr, size, key);
    if(index == -1) {
        cout << "\nKey not found!" << endl;
    } else {
        cout << "\nKey found at index " << index << endl;
    }    

    return 0;
}

void printArray(int arr[], int size) {
    cout << "\nPrinting the array...\nint arr[" << size << "]= { ";
    for(int i=0 ; i<size; i++) {
        cout << arr[i] << ", ";
    }
    cout << "\b\b }" << endl;
}

void swap(int* p, int* q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

void bubbleSort(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size-1, mid = 0;
    while(low <= high) {
        mid = (low + high) / 2;
        if(key > arr[mid]) {
            low = mid + 1;
        } else if(key < arr[mid]) {
            high = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;  // key not found
}
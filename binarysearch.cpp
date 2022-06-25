// Binary Search in C++
#include <iostream>
using namespace std; 
int binarySearch(int array[], int x, int low, int high) { 
 
 // Repeat until the pointers low and high meet each other
 while (low <= high) { 
 int mid = low + (high - low) / 2; 
 if (array[mid] == x) 
 return mid; 
 if (array[mid] < x) 
 low = mid + 1; 
 else
 high = mid - 1; 
 } 
 return -1; 
} 
void printArray(int arr[], int size) { 
 cout<<"The Array is :"<<endl; 
 for (int i = 0; i < size; i++) 
 cout << arr[i] << " "; 
 cout << endl; 
} 
int main() { 
 int array[] = {1,2,3,5,7,9}; //Binary search requires sorted ARRAY.
 int n = sizeof(array) / sizeof(array[0]); 
 printArray(array,n ); 
 int x; 
 cout<<"Enter element to search"<<endl; 
 cin>>x; 
 
 int result = binarySearch(array, x, 0, n - 1); 
 (result == -
1) ? cout << "Element not found" : cout << "Element found at index: " << result
; 
} 

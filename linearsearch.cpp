// Linear Search in C++
#include <iostream>
using namespace std;
int search(int array[], int n, int x)
{
    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}
void printArray(int arr[], int size)
{
    cout << "The Array is :" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int array[] = {2, 4, 0, 1, 9};
    int n = sizeof(array) / sizeof(array[0]);
    printArray(array, n);
    int x;
    cout << "Enter element to search" << endl;
    cin >> x;

    int result = search(array, n, x);
    (result == -1) ? cout << "Element not found" : cout << "Element found at index: " << result;
}
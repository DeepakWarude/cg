#include <iostream>
#include <string>
using namespace std;

// Template function for selection sort
template <typename T>
void selectionSort(T arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        T temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Template function to print arrays
template <typename T>
void printArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    // Sort integers
    cout << "Enter the number of integers: ";
    cin >> n;
    int intArr[n];
    cout << "Enter integers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> intArr[i];
    }
    selectionSort(intArr, n);
    cout << "Sorted integers: ";
    printArray(intArr, n);

    // Sort floats
    cout << "\nEnter the number of floats: ";
    cin >> n;
    float floatArr[n];
    cout << "Enter floats:\n";
    for (int i = 0; i < n; ++i) {
        cin >> floatArr[i];
    }
    selectionSort(floatArr, n);
    cout << "Sorted floats: ";
    printArray(floatArr, n);

    // Sort characters
    cout << "\nEnter the number of characters: ";
    cin >> n;
    char charArr[n];
    cout << "Enter characters:\n";
    for (int i = 0; i < n; ++i) {
        cin >> charArr[i];
    }
    selectionSort(charArr, n);
    cout << "Sorted characters: ";
    printArray(charArr, n);

    // Sort strings
    cout << "\nEnter the number of strings: ";
    cin >> n;
    string stringArr[n];
    cout << "Enter strings:\n";
    for (int i = 0; i < n; ++i) {
        cin >> stringArr[i];
    }
    selectionSort(stringArr, n);
    cout << "Sorted strings: ";
    printArray(stringArr, n);

    return 0;
}

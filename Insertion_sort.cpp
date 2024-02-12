#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size:";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nAfter Sorting: ";
    
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j;

        // Use a for loop for the inner loop
        for(j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }

        arr[j + 1] = temp;
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


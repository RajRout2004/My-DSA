#include<iostream>
#include<algorithm>
using namespace std;

void rev(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        std::swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
}

int main() {
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {6, 7, 8, 9, 0};

    rev(arr1, 6);
    rev(arr2, 5);

    printArray(arr1, 6);
    printArray(arr2, 5);

    return 0;
}

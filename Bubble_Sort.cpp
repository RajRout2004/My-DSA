#include<iostream>
#include<vector>
#include<algorithm>
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

    for(int i = 0; i < n - 1; i++) {
    	for(int j=0;j<n-i-1;j++){
    		if(arr[j]>arr[j+1]){
    			std::swap(arr[j],arr[j+1]);
			}
		}
	}
	for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        

    return 0;
}

#include<iostream>
using namespace std;

int binarySearch(int arr[],int size , int key){
		int start=0;
		int end=size-1;
		int mid=(start+end)/2;
		while(start<=end){
			if(arr[mid]==key){
				return mid;
			}
			if(key<arr[mid]){
				end=mid-1;
			}
			else{
				start=mid+1;
			}
			mid=(start+end)/2;
			
			
		}
		return -1;
}
int main(){
	int even[6]={1,2,3,4,5,6};
	int odd[5]={5,6,7,8,9};
	int index=binarySearch(even,6,7);
	cout<<"Index of 12 is"<<index<<endl;
}
	    
	

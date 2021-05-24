//Method 1: Simple Approach

#include<iostream>
#include<algorithm>

using namespace std;

void kthMaxMin(int arr[], int n, int k){
	sort(arr, arr+n);
	cout<< "Max elem is: "<< arr[n-k];
	cout<< "Min elem is: "<< arr[k-1];
}

int main(){
	int arr[]= {1, 2, 3, 4, 5};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	int k= 2;
	kthMaxMin(arr, n, k);
	
	
}

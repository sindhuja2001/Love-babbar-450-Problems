#include<bits/stdc++.h>

using namespace std;
void rotateByOne(int arr[], int n){
	int i= 0, j= n-1;
	while(i!= j){
		swap(arr[i], arr[j]);
		i++;
	}
}


void rotateArray(int arr[], int n, int d){
	for(int i= 0; i<d; i++){
		rotateByOne(arr, n);
	}
}
void printArray(int arr[], int n){
	for(int i= 0; i<n; i++){
		cout<<arr[i]<< " ";
	}
}


int main(){
	int arr[]= {1, 2, 3, 4, 5};
	int n= sizeof(arr)/sizeof(arr[0]);
	int d= 1;
	
	rotateArray(arr, n, d);
	printArray(arr, n);
} 

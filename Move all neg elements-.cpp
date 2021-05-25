//Partitioning Approach

#include<bits/stdc++.h>

using namespace std;
void moveElem(int arr[], int n){
	int i= -1;
	int pivot= 0;
	for(int j= 0; j<n; j++){
		if(arr[j]< pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
}
void printArray(int arr[], int n){
	for(int i= 0; i<n; i++){
	    cout<<arr[i]<< " ";
	}
}

int main(){
	int arr[]= {-2, 3, 5, -4, 1, 6};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	moveElem(arr, n);
	printArray(arr, n);
} 

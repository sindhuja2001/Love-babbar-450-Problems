#include<bits/stdc++.h>

using namespace std;

int distProblem(int arr[], int n){
	int A[n];
	for(int i= 0; i< n; i++){
		A[i]= 1;
	}
	
	//Traversing from L-> R
	for(int i= 1; i<n; i++){
		if(arr[i]> arr[i-1]){
			A[i]= A[i-1]+1;
		}
		else{
			A[i]= 1;
		}
	}
	//Traversing from R-> L
	
	for(int i= n-2; i>= 0; i--){
		if(arr[i]> arr[i+1]){
			A[i]= max(A[i+1]+1, A[i]);
		}
		else{
			A[i]= max(A[i], 1);
		}
	}
	int sum= 0;
	for(int i= 0; i< n; i++){
		sum+= A[i];
	}
	cout<< sum;
	
}

int main(){
	int arr[]= {23, 14, 15, 14, 56, 29, 14};
	int n= sizeof(arr)/ sizeof(arr[0]);
	distProblem(arr, n);
}

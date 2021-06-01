#include<bits/stdc++.h>

using namespace std;
void rearrange(int arr[], int n){
	int i, p= -1;
	int temp= 0;
	for(int i= 0; i<n; i++){
		if(arr[i]< 0){
		   p++;
		   temp= arr[p];
		   arr[p]= arr[i];
		   arr[i]= temp;
		   
	    }
	}
	int pos= p+1, neg= 0;
	
	while(pos< n && neg< pos && arr[neg]< 0){
		temp= arr[neg];
		arr[neg]= arr[pos];
		arr[pos]= temp;
		pos++;
		neg+= 2;
	}
	
}
void printArray(int arr[], int n){
	for(int i= 0; i<n; i++){
		cout<< arr[i]<< " ";
	}
}
int main(){
	int arr[]= {-1, 2, -3, 4, 5, 6, -7, 8, 9};
	int n= sizeof(arr)/ sizeof(arr[0]);
	
	rearrange(arr, n);
	cout<< "Alternative Elements are: ";
	
	printArray(arr, n);
}

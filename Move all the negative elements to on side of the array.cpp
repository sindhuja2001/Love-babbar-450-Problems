#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void moveElem(int arr[], int low, int high){
	while(left<= right){
		if(arr[low]< 0 && arr[high]< 0){
		   low++;
	    }
	    else if(arr[low]>0 && arr[high]< 0){
		   int temp= arr[low];
		   arr[low]= arr[high];
		   arr[high]= temp;
		    low++;
	    	high--;
	    }
	    else if(arr[low]> 0 && arr[high]> 0){
	     	high--;
    	}
	    else{
	     	low++;
	    	high--;
    	}
	
	}
	
}
void printArray(int arr[], int high){
	for(int i= 0; i<+ high; i++){
		cout<< arr[i]<<" ";
	}
}

int main(){
	int arr[]= {-1, 1, -2, 2, -3, 3};
	int n= sizeof(arr)/ sizeof(arr[0]);
	moveElem(arr, 0, n-1);
	printArray(arr, n-1);
}
